// (C) 2016 University of Bristol. See License.txt

/*
 * Signal.h
 *
 */

#ifndef TOOLS_SIGNAL_H_
#define TOOLS_SIGNAL_H_

#include <pthread.h>

class Signal
{
    pthread_mutex_t mutex;
    pthread_cond_t cond;

public:
    Signal();
    virtual ~Signal();
    void lock();
    void unlock();
    void wait();
    void broadcast();
};

#endif /* TOOLS_SIGNAL_H_ */
