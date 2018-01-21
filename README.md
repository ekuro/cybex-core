由于暂时没有.gitignore配置文件，请clone后拷贝文件夹进行编译，需要修改源码时再回到clone的文件夹进行对应修改


sudo apt-get update

sudo apt-get install autoconf cmake git libboost-all-dev libssl-dev


cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo .

make

即可在programs文件夹内找到编译好的程序



