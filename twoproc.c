#include "types.h"
#include "user.h"

int
main(int argc, char **argv)
{
    int pid = fork();

    if(!pid)
        sethipriority();

    for(int x=0; x<50; x++)
    {
        if(!pid)
            printf(1, "+\n");
        else
            printf(1, "-\n");

        yield();
    }
    if(pid){
        wait();
    }

	exit();
	return 0;
}
