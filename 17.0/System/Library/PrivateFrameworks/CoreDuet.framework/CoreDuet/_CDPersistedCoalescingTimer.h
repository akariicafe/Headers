@class _PASCoalescingTimer, NSString, BMSource, BMStoreStream, NSObject;
@protocol OS_dispatch_queue;

@interface _CDPersistedCoalescingTimer : NSObject {
    double _delay;
    double _leeway;
    NSObject<OS_dispatch_queue> *_queue;
    _PASCoalescingTimer *_coalescingTimer;
    NSString *_persistencePath;
    BMStoreStream *_storeStream;
    BMSource *_source;
}

- (void)processData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelay:(double)a0 coalesceData:(id /* block */)a1 operation:(id /* block */)a2 persistencePath:(id)a3 dataClass:(Class)a4 timerName:(id)a5;

@end
