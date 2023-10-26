#include "test.h"

BYTE git_menu()
{
	switch(prog(menu_git))
	{
		case 1:
			git();
		break;
		case 11:
			git_init();
		break;
		case 111:
			git_ssh();
		break;
		case 12:
			git_commits();
		break;
		default:
			
		return 0;
	}
	return 1;
}

void git_commits()
{
	printf("\n________________________________\n");
	
	printf("work <<name <vesion> >> ");
	printf("data time ");
	printf("- for many tested stable version with new or cut function\n");
	
	printf("fix <<name>> ");
	printf("data time ");
	printf("- for commit with fixing problem\n");
	
	printf("prepare <<name>> ");
	printf("data time ");
	printf("- for revet if next solution is bad\n");
	
	printf("end day ");
	printf("data time ");
	printf("- for save after AFK\n");
	
	printf("upd <<name>> ");
	printf("data time ");
	printf("- for save after add new function\n");

	printf("err <<name>> ");
	printf("data time ");
	printf("- for save in place with error\n");
}

void git()
{
	printf("\n________________________________\n");
	printf("<git status> - print your changes file.\n");
	printf("<git commit -a> - enter name for commit (<-a> text editor).\n");
	printf("<git push origin <name_of_branch>> - upload your commit(all adding files) on your repository.\n");
	printf("<git checkout> - change activ branch\n");
	printf("<git branch> - create new branch and change active branch on him\n");
}

void git_init()
{
	printf("\n________________________________\n");
	printf("<sudo apt install git> - install on linux.\n");
	printf("On windows you need download exe file on PC\n");
	printf("<git --version> - check install.\n");
	printf("<git config --global user.name  \"Your name\"> - enter your nickname\n");
	printf("<git config --global user.email \"Your email\"> - enter your email\n");
	printf("<git config  user.name  > - check your nickname\n");
	printf("<git config  user.email > - check your email\n");
	printf("<Next, you need open folder with files for tracking and open terminal (git BASH in windows)\n");
	printf("<git init> - this will crate local git repository.\n");
	printf("<git status> - Check in any incomprehensible situation.\n");
	printf("	<git add .> - add all files on floder.\n");
	printf("	<git add file_name.extention> - add one file.\n");
	printf("	<git add name_folder/.> - add all files on another folder.\n");
	printf("or  <cd name_folde>r - go to folder.\n");
	printf("	<git add .> - and add all files.\n");
	printf("<git status> - you can see all adding files.\n");
	printf("<git rm --cached name_file.exptention> - delete file from tracking.\n");
	printf("<git commit -m \"init\"> - your first commit.\n");
	printf("Connect to dist repo.\n");
	printf("<git remote -v> - see dist repo.\n");
	printf("<git branch -M main> - create branch for git.hub.\n");
	printf("<git remote add origin git@github.com:your_login/repository_name.git> - .\n");
	printf("<git push -u origin main> - upload on git.hub.\n");
	printf("This is all. You can use git.\n");

	printf("Add 1. command for change text editor for commits in git:\n	git config --global core.editor \"gedit -w\"");
}

void git_ssh()
{
	prt_ln();
	printf("Error with git push!\n");
	printf("If we started git repo in new PC/OS, need add new ssh key.\n");
	printf("<ssh-agent -s> you can see next mess - <echo Agent pid 6344;>\n");
	printf("<ssh-add -l -E sha256> i not remember. Do it.\n");
	printf("<ssh-keygen -t ed25519 -C \"your_email@example.com\"> next. You need generate key.\n");
	printf("Programm ask you. Name of file? You can tap Enter.\nNext ask. Password phrase? Tap Enter and go mext.\n");
	printf("You can see path on your new key:\n/home/user/.ssh/id_ed25519\n");
	printf("\nNext step: we need wake ssh-agent.\n");
	printf("<eval \"$(ssh-agent -s)\"> - wake command. Send you next messege <Agent pid XXXX(Your PID)>\n");
	printf("<ssh-add ~/.ssh/id_ed25519> this commang add ssh-key.\n");
	printf("After this you need open git-hub and sign in.\n");
	printf("Go to \"settings...\"\n");
	printf("Go to SSH and GPG keys.\n");
	printf("Push button \"new SSH key\"\n");
	printf("Next copy your ssh key from path in key-gen command.\n For example: /home/.ssh/id_ed25519.pub\n");
	printf("After save you can try use git push\n");
}