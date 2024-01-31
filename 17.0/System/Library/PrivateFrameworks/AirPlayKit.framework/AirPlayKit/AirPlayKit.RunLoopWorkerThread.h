@interface AirPlayKit.RunLoopWorkerThread : NSThread {
    void /* unknown type, empty encoding */ pendingQueue;
    void /* unknown type, empty encoding */ runLoop;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ lock;
}

- (id)init;
- (void)dealloc;
- (void)main;
- (void).cxx_destruct;

@end
