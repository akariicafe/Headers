@class NSString, DDSBackgroundActivityScheduler, NSDate;
@protocol DDSRemoteSyncStateDelegate;

@interface DDSRemoteSyncState : NSObject <DDSBackgroundActivitySchedulerDelegate>

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long syncStatus;
@property (nonatomic) unsigned long long attemptCount;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) DDSBackgroundActivityScheduler *scheduler;
@property (weak, nonatomic) id<DDSRemoteSyncStateDelegate> delegate;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, copy) NSString *metadataSyncStatePreferenceKey;
@property (readonly, copy) NSString *scheduleUpdateIdentifier;
@property (readonly, copy) NSString *scheduleRetryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildVersionString;
+ (double)timeIntervalUntilNextRegularUpdate;

- (void)resetState;
- (void)loadState;
- (void)saveState;
- (void)scheduleRetry;
- (id)init;
- (void)scheduleRegularUpdate;
- (void)requestCompleteRefresh;
- (void)completedUpdateCycleWithError:(id)a0;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)a0;
- (double)timeBetweenSyncs;
- (void)beganUpdateCycle;
- (BOOL)shouldInitiateRegularUpdateCycle;
- (void)requestUpdate;
- (id)initWithDelegate:(id)a0 assetType:(id)a1;
- (BOOL)shouldRequestCompleteRefresh;
- (void).cxx_destruct;
- (void)loadStateAndScheduleUpdate;
- (void)requestRetry;
- (void)performScheduledActivityWithIdentifier:(id)a0;

@end
