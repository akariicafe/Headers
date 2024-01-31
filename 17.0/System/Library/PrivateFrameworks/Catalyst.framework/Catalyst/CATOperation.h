@class _CATObserverManager, NSUUID, NSDictionary, NSArray, NSError, NSDate, NSLock;

@interface CATOperation : NSOperation {
    NSArray *mCallStackSymbols;
    _Atomic int mState;
    NSLock *mLock;
    _CATObserverManager *mObserverManager;
}

@property (retain) NSUUID *UUID;
@property unsigned long long phase;
@property (retain) NSDate *createdDate;
@property (retain) NSDate *enqueuedDate;
@property (retain) NSDate *startedDate;
@property (retain) NSDate *finishedDate;
@property (retain) NSError *error;
@property (retain) NSDictionary *userInfo;
@property (retain) id resultObject;
@property long long completedUnitCount;
@property long long totalUnitCount;
@property (readonly) BOOL isCanceled;
@property (readonly) BOOL canCancel;

+ (BOOL)isCancelable;
+ (id)callStackSymbols;
+ (BOOL)automaticallyNotifiesObserversOfCreatedDate;
+ (BOOL)automaticallyNotifiesObserversOfEnqueuedDate;
+ (BOOL)automaticallyNotifiesObserversOfFinishedDate;
+ (BOOL)automaticallyNotifiesObserversOfStartedDate;
+ (BOOL)automaticallyNotifiesObserversOfUUID;
+ (id)keyPathsForValuesAffectingIsCanceled;

- (BOOL)isExecuting;
- (BOOL)isReady;
- (id)init;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (id)stateDescription;
- (void)operationWillStart;
- (id)description;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)operationWillFinish;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2 delegateQueue:(id)a3;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2 userInfo:(id)a3 delegateQueue:(id)a4;
- (void)endOperationWithResultObject:(id)a0;
- (void)operationDidFinish;
- (BOOL)whenStateIs:(int)a0 atomicallySwapWith:(int)a1;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2 userInfo:(id)a3;
- (void)endOperationSuccessfullyIfNeeded;
- (void)endOperationWithError:(id)a0;
- (void)finalizeOperation;
- (void)operationWillEnqueueOntoOperationQueue:(id)a0;

@end
