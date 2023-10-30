# libft

 - It is forbidden to declare global variables.
 - If you need subfunctions to write a complex function, you should define these sub- functions as static to avoid publishing them with your library. It would be a good habit to do this in your future projects as well.
 - Submit all files in the root of your repository.
 - It is forbidden to submit unused files.
 - Every .c must compile with flags.
 - You must use the command ar to create your library, using the command libtool is forbidden.

# almost all check passes
 - In ft_split, It need to free the memory of the nested list before abort when a bad allocation happens
 - in ft_lstmap, it need to correctly use the del function f() to clean
