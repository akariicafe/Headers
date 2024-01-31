@class RCUnfairLock, NSString, RCOnce, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface RCOperation : NSOperation <RCOperationCanceling, RCOperationIdentifying, RCOperationPrioritizing> {
    _Atomic BOOL _executing;
    _Atomic BOOL _finished;
}

@property (copy, nonatomic) id /* block */ timedOutTest;
@property (retain, nonatomic) NSMutableArray *childOperations;
@property (nonatomic) BOOL childOperationsCancelled;
@property (retain, nonatomic) RCUnfairLock *childOperationsLock;
@property (retain, nonatomic) RCOnce *startOnce;
@property (nonatomic) double operationStartTime;
@property (nonatomic) double operationEndTime;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *finishedGroup;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, nonatomic) BOOL hasOperationStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long relativePriority;

- (void)operationDidFinishWithError:(id)a0;
- (void)addCompletionHandler:(id /* block */)a0;
- (unsigned long long)maxRetries;
- (BOOL)isExecuting;
- (id)init;
- (void)dealloc;
- (void)setQualityOfService:(long long)a0;
- (void)start;
- (BOOL)isFinished;
- (void)performOperation;
- (BOOL)isAsynchronous;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)_startIfNeeded;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)prepareOperation;
- (id)longOperationDescription;
- (void)cancel;
- (id)shortOperationDescription;
- (void)resetForRetry;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)finishFromEarlyCancellation;
- (id)throttleGroup;
- (void)associateChildOperation:(id)a0;
- (void)associateChildOperations:(id)a0;
- (void)cancelChildOperations;
- (void)finishedPerformingOperationWithError:(id)a0;
- (unsigned long long)propertiesInheritedByChildOperations;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (void)startIfNeeded;
- (void)_associateChildOperation:(id)a0;
- (id)_errorUserInfo;
- (void)_finishOperationWithError:(id)a0;
- (void)_finishedPerformingOperationWithError:(id)a0;
- (void)_handleRetryFromError:(id)a0 signal:(id)a1;
- (void)_handleThrottlingFromError:(id)a0 delay:(double)a1;
- (BOOL)_shouldThrottleOperationWithRetryAfter:(double *)a0;
- (id)_userDefaultsKeyForThrottleEndDate;

@end
