# To the extent possible under law, the author(s) have dedicated all 
# copyright and related and neighboring rights to this software to the 
# public domain worldwide. This software is distributed without any warranty. 
# You should have received a copy of the CC0 Public Domain Dedication along 
# with this software. 
# If not, see <http://creativecommons.org/publicdomain/zero/1.0/>. 

# /etc/bash.bashrc: executed by bash(1) for interactive shells.

# System-wide bashrc file

# Check that we haven't already been sourced.
([[ -z ${CYG_SYS_BASHRC} ]] && CYG_SYS_BASHRC="1") || return

# If not running interactively, don't do anything
[[ "$-" != *i* ]] && return

# Set a default prompt of: user@host and current_directory
PS1='\[\e]0;\w\a\]\n\[\e[32m\]\u@\h \[\e[33m\]\w\[\e[0m\]\n\$ '

# Uncomment to use the terminal colours set in DIR_COLORS
# eval "$(dircolors -b /etc/DIR_COLORS)"

##############################################################
# OMNeT++ specific changes

export OMNETPP_ROOT=$HOME
export TCL_LIBRARY=/mingw64/lib/tcl8.6
export TERM=xterm-256color

export PATH=".:${OMNETPP_ROOT}/bin:${PATH}"

# source the git completion script if exsist
if [ -f "/usr/share/bash-completion/completions/git" ] ; then
  source "/usr/share/bash-completion/completions/git"
fi
if [ -f "/usr/share/git/git-prompt.sh" ] ; then
  source "/usr/share/git/git-prompt.sh"
fi

PS1='\[\e]0;\w\a\]\n\[\e[32m\]\[\e[33m\]$(__git_ps1 "(%s) ")\w\[\e[0m\]\$ '

PRODUCT=`cat ${OMNETPP_ROOT}/Version | sed 's/omnetpp-/OMNeT++ /' | sed 's/omnest-/OMNEST /'`
echo "Welcome to $PRODUCT!"

if [ ! -f Makefile.inc ]; then
cat <<__END__

Type "./configure" and "make" to build the simulation libraries.

When done, type "omnetpp" to start the IDE.
__END__
fi
