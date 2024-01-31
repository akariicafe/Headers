@interface _SYCountedSemaphore : NSObject {
    _Atomic unsigned int _sem_port;
    _Atomic int _count;
    _Atomic int _signals;
    _Atomic BOOL _invalidated;
}

- (void)signal;
- (id)init;
- (BOOL)waitWithTimeout:(double)a0;
- (void)invalidate;
- (id)initWithCount:(long long)a0;
- (void)_ensureSemaphore;
- (void)_signalSemaphore;
- (BOOL)_waitSemaphoreWithTimeout:(double)a0;

@end
