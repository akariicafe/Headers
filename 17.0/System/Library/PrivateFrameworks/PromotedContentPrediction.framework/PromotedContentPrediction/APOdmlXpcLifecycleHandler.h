@class NSString, NSOperationQueue, NSDate, NSObject;
@protocol OS_xpc_object;

@interface APOdmlXpcLifecycleHandler : NSObject

@property (nonatomic) BOOL performDeferralCheck;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpc_activity;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL shouldDefer;

- (void)startBackgroundDeferralCheckForTime:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)taskCanContinueForTime:(id)a0;
- (void)_backgroundDeferralCheck:(id)a0 completion:(id /* block */)a1;
- (BOOL)finishTask;
- (BOOL)deferTask;
- (BOOL)continueTask;
- (void)endBackgroundDeferralCheck;
- (void).cxx_destruct;
- (BOOL)taskIsContinuing;
- (BOOL)taskIsDeferred;
- (id)initWithActivity:(id)a0;

@end
