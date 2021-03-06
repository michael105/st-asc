# This file is autogenerated by make.
# Please edit config.in for modifications,
# changes here will be silently overwritten


#makefilestart

# Set to 0
SHOWCONFIGINFO := 0

# Dump debugging info
# Values: 0 (off), 1 (on)
ENABLEDEBUG := 0

# Dump all available debug
FULLDEBUG := 0


# version
VERSION := 0.94

# Set to 1 enable Xresource configuration
# (in addition, st-asc has to be started with the option "-x on")
XRESOURCES := 0

# compile with utf8-support
UTF8 := 0

# Length of history, in bits, -> log(size in lines) ~ bits */
# 8 equals 1<<8 = 256 lines, 9 = 512, 10 = 1024, ..
HISTSIZEBITS := 14
#HISTSIZEBITS = 6

# opt Flag. -O2 might be save, -O3 sometimes gives troubles
OPT_FLAG := -Os 
#OPT_FLAG = -g

# Linker Flags
#LINKER_FLAG = -g
LINKER_FLAG := -s 

# paths
PREFIX := /usr/local
MANPREFIX := $(PREFIX)/share/man

X11INC := /usr/X11R6/include
X11LIB := /usr/X11R6/lib

# Executables

# pkg-config
PKG_CONFIG := pkg-config

# compiler and linker
CC := gcc


#end of Makefile syntax options. C-Style options below
#makefileend
