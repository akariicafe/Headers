@class NSString, CNSuspendableSchedulerDecorator;
@protocol CNObserver;

@interface _CNBufferedObserver : NSObject <CNObserver> {
    CNSuspendableSchedulerDecorator *_observerScheduler;
    id<CNObserver> _observer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bufferObserver:(id)a0 schedulerProvider:(id)a1;

- (void)observerDidFailWithError:(id)a0;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 scheduler:(id)a1;

@end
