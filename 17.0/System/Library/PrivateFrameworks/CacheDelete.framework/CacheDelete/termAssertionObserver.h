@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface termAssertionObserver : NSObject <RBSTerminationAssertionObserving>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *completionSem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)assertionTargetProcessDidExit:(id)a0;

@end
