git_create_repo
Before starting let's specify the required tasks and the work flow

/*********the Required Tasks*********/
/*
*1-Please Create a Folder on your PC
*2-Make it a local Git repo
*3-Commit any code in the repo
*4-Try all the discussed commands on your local repo
*5-Push your local repo to a remote repo on Github
*6-Branch from the remote repo. and commit code on your branch
*7-Merge your code using the discussed Git Workflow
*8-Submit your github repo link with all the above.
*/

/********the work flow********/
/*
*1-clone the remote repo to your machine
*2-branch for each feature
*3-develop your files till reaching the end of development (EOD)
*4-update your local master by pulling from the remote repo
*5-merge local master to feature branch
*6-merge feature branch into local master
*7-push local master to the cloud(remote repo)
*/

/***********creating a folder************/
// commands: mkdir My_FIRST_REPO
//		cd MY_FIRST_REPO/
//		echo "git_create_repo">>README.md
// folder name: "My_FIRST_REPO"

/***********committing any code in the repo************/
// commands: git config --global user.name "Ahmed Adel"
//		git config --global.email "ahmedelbehairy1996@gmail.com"
//		git add .
//		git commit -m "OUR FIRST COMMIT OCCURS HERE"

/***********our first local commit occurs here************/

/***********Try all the discussed commands on your local repo************/
// GIT BASIC COMMANDS: git init (already tried)
//		       git config --global user.name/email (already tried)
//		       git add (already tried)
//		       git commit -m (already tried)
//		       git restored <file name> 
//		       git restored --staged <file name>
//		       git branch <branch name>
//		       git checkout <branch name>
//		       git revert <commit name>
//		       git status (already tried)
//		       git log 
//		       git clone <repo URL>
//		       git push/pull

// trying git restore --staged <file name>
//	 status before trying:
//		$ git status
//		On branch master
//		Changes to be committed:
//		  (use "git restore --staged <file>..." to unstage)
//		        modified:   README.md
//	status after
//		$ git status
//		On branch master
//		Changes not staged for commit:
//		  (use "git add <file>..." to update what will be committed)
//		  (use "git restore <file>..." to discard changes in working directory)
//		        modified:   README.md
//
//		no changes added to commit (use "git add" and/or "git commit -a")

// trying git restore <file name>
//       status before trying:
//		$ git status
//		On branch master
//		Changes to be committed:
//		  (use "git restore --staged <file>..." to unstage)
//		        modified:   README.md
//
//		Changes not staged for commit:
//		  (use "git add <file>..." to update what will be committed)
//		  (use "git restore <file>..." to discard changes in working directory)
//		        modified:   README.md
//      status after trying:
//		$ git status
//		On branch master
//		Changes to be committed:
//		  (use "git restore --staged <file>..." to unstage)
//		        modified:   README.md

/***********our second local commit occurs here************/

// trying get log
//	output:
//		$ git log
//		commit c4ee66979374b63a796e22858a983147c09e3bdf (HEAD -> master)
//		Author: Ahmed Adel <ahmedelbehairy1996@gmail.com>
//		Date:   Tue Jun 29 23:04:28 2021 +0200
//		
//		    OUR SECOND COMMIT OCCURS HERE
//
//		commit 4ecf14f55937f8d72bda7ca99cdb919ebea9bf00
//		Author: Ahmed Adel <ahmedelbehairy1996@gmail.com>
//		Date:   Tue Jun 29 22:33:29 2021 +0200
//		
//		    OUR FIRST COMMIT OCCURS HERE

//reset will be tried in the following tasks

/***********our third local commit occurs here************/

/***********push your local repo to a remote repo on github************/
// commands: git push --set-upstream https://github.com/AhmedAdelElbehairy/MY_FIRST_REPO.git master

/***********branch from the remote repo and commit code on your branch************/
// commands: git add .
//		git commit -m "COMMIT BEFORE BRANCHING"
//		git branch feature1
//		git checkout feature1
//		/*some file modifications*/
//		git add . 
//		git commit -m "COMMIT AFTER BRANCHING"
//		git push --set-upstream https://github.com/AhmedAdelElbehairy/MY_FIRST_REPO.git feature1

/***********merge your code using git work flow************/
// commands: git add .
//		git commit -m "COMMIT BEFORE MERGING - EOD"
//		git checkout master
//		git pull
//		git checkout feature1
//		git merge master
//		git checkout master
//		git merge feature1
//		git push
