@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}

- (void)async:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(BOOL)a1;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;
- (void)suspend;
- (void)assertInside;
- (double)currentLatchedAbsoluteTimestamp;
- (id)runloop;
- (void)resume;
- (id)getTimeCoercibleVariantInstance;
- (void)heartBeat:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)newTimer;
- (BOOL)inPermissiveMode;
- (BOOL)isSuspended;
- (void)sync:(id /* block */)a0;
- (void)assertOutside;

@end
