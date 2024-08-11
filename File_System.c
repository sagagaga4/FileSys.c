#include<stdio.h>
#include<stdlib.h>
#define MAX_FOLDER_NAME 10
#define MAX_FILE_NAME 20
#define MAX_TEXT_EDITOR_SIZE 100

typedef struct Files
{
	char File_name[MAX_FILE_NAME];
	char text_editor[MAX_TEXT_EDITOR_LEN];
}Files;

typedef struct Folder
{
	char Folder_name[MAX_FOLDER_NAME];
	Files *files;
	struct Folder *next;
}Folder;

int Create_Folder(Folder *NEW)
{
	if(NEW == NULL)
	{
		printf("EMPTY");
		return 1;
	}
	unsigned char FNAME[256];
	printf("ENTER FOLDER NAME:\n");
	if(fgets(FNAME,sizeof(FNAME),stfdin) == NULL || *FNAME < 'A' || *FNAME > 'z' )
	{
		printf("INPUT ERROR!\n");
		return 1;
	}

	NEW* new_folder = malloc(sizeof(Folder));
	if(new_folder == NULL)
	{
		printf("ALLOCATION FAILED\n");
		exit(1);
	}
	new_folder->Folder_name = FNAME;
	new-folder->next = NULL;
}

int create_file(Files *NEW)
{
	if(NEW == NULL)
	{
		printf("EMPTY");
		return 1;
	}

	char fNAME[256];
	size_t len_f = sizeof(Files);
	
	printf("ENTER FILE NAME: \n");
	if(fgets(fNAME,len_f,stdin) == NULL || fNAME < 'A' || fNAME > 'z' )
	{
		printf("INPUT ERROR!\n");
		return 1;
	}

	printf("ENTER %s TEXT:\n",fNAME);
	if(scanf("%s",&file_text) != 1)
	{
		printf("INPUT ERROR!");
		return 1;
	}
	int c = getchar("\n",c);

	NEW* new_file = malloc(sizeof(Files));
	if(new_file == NULL)
	{
		printf("ALLOCATION FAILED\n");
		exit 1;
	}
	new_file->File_name = fNAME;
	new_file->Text_Editor[];


}
















int main()
{







	return 0;
}
