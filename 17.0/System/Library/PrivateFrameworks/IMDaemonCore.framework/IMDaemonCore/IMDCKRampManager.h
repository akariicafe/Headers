@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKRampManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) NSTimer *retryTimer;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)_shouldSendPriorityRequest;
- (void)_persistRampFetchServerError:(BOOL)a0;
- (void)cachedRampState:(id /* block */)a0;
- (id)_rampUpRecordID;
- (void)fetchLatestRampStateFromCK:(id /* block */)a0;
- (void)_scheduleOperation:(id)a0;
- (void)_performRampCheckWithRetryAfter:(double)a0 recordFetchedCompletionBlock:(id /* block */)a1;
- (void)_writeRampStateAllowed:(BOOL)a0 promoted:(BOOL)a1 visible:(BOOL)a2 fetchHadServerError:(BOOL)a3;
- (void)_fetchLatestRampStateFromCK:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_CKUtilitiesSharedInstance;

@end
