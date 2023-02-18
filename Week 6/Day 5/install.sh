#!/bin/bash

#create the mydict directory if absent
if [ ! -d $HOME/mydict ]
then
    mkdir $HOME/mydict
fi

#copy the necessary files
cp data_base $HOME/mydict
cp mydict $HOME/mydict

#enable mydict command to be accessed every where for this user
echo "export PATH=$PATH:$HOME/mydict/" >> $HOME/.bashrc

source $HOME/.bashrc
