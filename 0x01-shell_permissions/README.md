# 0x01. Shell, permissions

[0-iam_betty](./0-iam_betty) - Create a script that switches the current user to the user `betty`.

- You should use exactly 8 characters for your command (+1 character for the new line).
- You can assume that the user `betty` will exist when we will run your script

[1-who_am_i](./1-who_am_i) - Write a script that prints the effective userid of the current user.

[2-groups](./2-groups) - Write a script that prints all the groups the current user is part of.

[3-new_owner](./3-new_owner) - Write a script that changes the owner of the file `hello` to the user `betty`.

[4-empty](./4-empty) - Write a script that creates an empty file called `hello`.

[5-execute](./5-execute) - Write a script that adds execute permission to the owner of the file `hello`

- The file hello will be in the working directory

[6-multiple_permissions](./6-multiple_permissions) - Write a script that adds execute permission to the owner and the group owner, and read permission to other users, to the file `hello`

- The file `hello` will be in the working directory.

[7-everybody](./7-everybody) - Write a script that adds execution permission to the owner, the group owner and the other users, to the file `hello`

- The file hello will be in the working directory
- You are not allowed to use commas for this script

[8-James_Bond](./8-James_Bond) - Write a script that sets the permission to the file hello as follows:

- Owner: no permission at all
- Group: no permission at all
- Other users: all the permissions

The file `hello` will be in the working directory You are not allowed to use commas for this script

[9-John_Doe](./9-John_Doe) - Write a script that sets the mode of the file `hello` to this:

> -rwxr-x-wx 1 julien julien 23 Sep 20 14:25 hello

- The file hello will be in the working directory
- You are not allowed to use commas for this script

[10-mirror_permissions](./10-mirror_permissions) - Write a script that sets the mode of the file `hello` the same as `olleh`’s mode.

- The file `hello` will be in the working directory
- The file `olleh` will be in the working directory

[11-directories_permissions](./11-directories_permissions) - Create a script that adds execute permission to all subdirectories of the current directory for the owner, the group owner and all other users. Regular files should not be changed.

[12-directory_permissions](./12-directory_permissions) - Create a script that creates a directory called `my_dir` with permissions 751 in the working directory.

[13-change_group](./13-change_group) - Write a script that changes the group owner to `school` for the file `hello`

- The file hello will be in the working directory
