#

# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return



stty -ixon
shopt -s autocd #Allows you to cd into directory merely by typing the directory name.

PS1="\[$(tput bold)\]\[$(tput setaf 1)\][\[$(tput setaf 3)\]\u\[$(tput setaf 2)\]@\[$(tput setaf 4)\]\h \[$(tput setaf 5)\]\W\[$(tput setaf 1)\]]\[$(tput setaf 7)\]\\$ \[$(tput sgr0)\]"

(cat ~/.cache/wal/sequences &)
source ~/.cache/wal/colors-tty.sh

alias SS="sudo systemctl"
alias v="vim"
alias sv="sudo vim"
alias r="ranger"
alias sr="sudo ranger"
alias i="yay -S"
alias ls='ls -hN --color=auto --group-directories-first'
alias crep="grep --color=always" # Color grep - highlight desired sequence.
alias ccat="highlight --out-format=xterm256" #Color cat - print file with syntax highlighting.

setxkbmap be
