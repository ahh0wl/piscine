SRCS = srcs/*.c
INCS = includes
NAME = libft.a
LIBC = ar cr ${NAME}
IDXC = ranlib ${NAME}
CFLAGS = -Wall -Werror -Wextra 

cc ${CFLAGS} ${NAME} ${SRCS}
${IDXC}

all = $(filter-out all,$(MAKECMDGOALS))

.PHONY: all

.DEFAULT_GOAL := all
