#ifdef CHANGED
#ifndef USERTHREAD_H
#define USERTHREAD_H

struct struct_user_thread
{
    int f;
    int arg;
    int callback;
};

int do_UserThreadCreate(int f, int arg, int callback);

int do_UserThreadExit();

int do_UserThreadJoin(int Id);

void StartUserThread(int f);

#endif
#endif
