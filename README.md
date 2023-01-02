## one step push
Once finished github repo initilisazion
You can simply use:
  ./cloudSync \<Your commit message\>
To sync the code between cloud and local.

## background
This small executable file is actually doing the bellow three step:
(1) git add .
(2) git commit -m \<commit message\>
(3) git push