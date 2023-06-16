#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char username[100];
    char key[100];
    struct Node *next;
    struct Node *prev;
} Node;

void addNode(Node **head, char username[], char key[])
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    strcpy(newNode->username, username);
    strcpy(newNode->key, key);
    newNode->next = NULL;

    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
    }
    else
    {
        Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

char *generateKey(Node *head, char username[])
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->username, username) == 0)
        {
            return temp->key;
        }
        temp = temp->next;
    }
    return NULL;
}

int main(int argc, char *argv[])
{
	char *key;
	
	if (argc == 2)
	{
		Node *head = NULL;
		addNode(&head, "julien", "javascript");
		addNode(&head, "alice", "abcd1234");
		addNode(&head, "bob", "password");
		
		key = generateKey(head, argv[1]);
		if (key != NULL)
		{
			printf("%s\n", key);
		}
		else
		{
			printf("Invalid username.\n");
		}
	}
	else if (argc == 3)
	{
		if (strcmp(argv[2], "javascript") == 0 && strcmp(argv[1], "julien") == 0)
		{
			printf("Congrats!\n");
		}
		else
		{
			printf("Invalid key.\n");
		}
	}
	else
	{
		printf("Usage: %s username [key]\n", argv[0]);
	}
	return 0;
}
