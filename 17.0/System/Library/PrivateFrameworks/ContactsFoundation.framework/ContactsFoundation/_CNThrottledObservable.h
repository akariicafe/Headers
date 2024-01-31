@protocol CNScheduler, CNCancelable, CNObservable;

@interface _CNThrottledObservable : CNObservable

@property (readonly) id<CNObservable> observable;
@property (readonly) double interval;
@property (readonly) unsigned long long options;
@property (readonly) id<CNScheduler> observerScheduler;
@property (readonly) id<CNScheduler> resourceLock;
@property (retain) id mostRecentResult;
@property (retain) id<CNCancelable> delayToken;
@property BOOL isCoalescing;

- (void)dealloc;
- (id)initWithInterval:(double)a0 options:(unsigned long long)a1 observable:(id)a2 schedulerProvider:(id)a3;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)observerScheduler_sendResultToObserver:(id)a0;

@end
