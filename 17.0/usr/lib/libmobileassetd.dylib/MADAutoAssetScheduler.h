@class NSMutableArray, NSMutableDictionary, NSTimer, SUCoreLog, NSString, MADAutoAssetPersisted, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetScheduler : NSObject

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *schedulerQueue;
@property (readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState;
@property (retain, nonatomic) NSMutableArray *jobsAwaitingTrigger;
@property (nonatomic) long long jobsAwaitingPushTrigger;
@property (retain, nonatomic) NSMutableDictionary *jobsBySelector;
@property (nonatomic) BOOL globalActivityInterval;
@property (nonatomic) long long activityIntervalSecs;
@property (nonatomic) long long tickerIntervalSecs;
@property (nonatomic) BOOL tickerIntervalReRegistering;
@property (nonatomic) BOOL activityTickerFired;
@property (nonatomic) long long pushDelaySecs;
@property (nonatomic) long long pushCounter;
@property (nonatomic) long long scheduledJobsXPCActivity;
@property (retain, nonatomic) NSTimer *scheduledJobsBackupTriggerTimer;
@property (nonatomic) long long pushJobsXPCActivity;
@property (retain, nonatomic) NSString *lastTickTimestampString;

+ (void)jobFinishedForSetDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withPotentialNetworkFailure:(BOOL)a2;
+ (void)controlEliminateSetDomainName:(id)a0 forAssetSetIdentifier:(id)a1 indicatingWhenEliminated:(BOOL)a2;
+ (long long)persistedScheduledCount;
+ (id)migrateMismatchedPersistedStateVersion:(id)a0 forEntryID:(id)a1 withMismatchedState:(id)a2;
+ (id)nameForXPCStatus:(long long)a0;
+ (void)schedulePushNotifications:(id)a0;
+ (void)forceGlobalForget:(id)a0;
+ (void)addScheduledJobs:(id)a0 basedOnControl:(id)a1;
+ (void)jobFinishedForSelector:(id)a0 withPotentialNetworkFailure:(BOOL)a1;
+ (void)controlEliminateSelector:(id)a0;
+ (id)newSetPolicyForDomainName:(id)a0 forAssetSetIdentifier:(id)a1;
+ (void)scheduleSetDomainName:(id)a0 forAssetSetIdentifier:(id)a1 usingSetUpdatePolicy:(id)a2;
+ (id)stringFromDate:(id)a0;
+ (BOOL)isSelector:(id)a0 consideredEqualTo:(id)a1;
+ (long long)tickerIntervalForActivityIntervalSecs:(long long)a0;
+ (id)autoAssetScheduler;
+ (void)resumeFromPersisted;
+ (void)scheduleSelector:(id)a0 triggeringAtIntervalSecs:(long long)a1;
+ (id)jobsAwaitingTrigger;
+ (id)jobTypeName:(BOOL)a0 setJob:(BOOL)a1 requiringRetry:(BOOL)a2;

- (void)_registerForAndStartPushActivity:(long long)a0;
- (void)_logPersistedEntry:(id)a0 operation:(id)a1 persistingSelector:(id)a2 intervalSecs:(long long)a3 remainingSecs:(long long)a4 pushedJob:(BOOL)a5 setJob:(BOOL)a6 setPolicy:(id)a7 requiringRetry:(BOOL)a8 message:(id)a9;
- (id)_copyCurrentlyScheduledSelectors;
- (id)init;
- (void)_performTickerOperations:(long long)a0;
- (void)_resumeConnector;
- (void)_informConnectorAlteredSelectors;
- (id)_copyCurrentlyScheduledSelectorsRequiringRetry;
- (void)_eliminateSpecificSelector:(id)a0;
- (void)_schedulePushNotifications:(id)a0;
- (id)summary;
- (void)_logPersistedTableOfContents:(id)a0;
- (void)_startActivityBackupTrigger;
- (void)_performPushNotificationOperations;
- (void)_registerForAndStartActivity:(long long)a0;
- (id)description;
- (void)_scheduleSelector:(id)a0 triggeringAtIntervalSecs:(long long)a1 withRemainingSecs:(long long)a2 forPushedJob:(BOOL)a3 forSetJob:(BOOL)a4 withSetPolicy:(id)a5 triggeringIfLearned:(BOOL)a6;
- (void)_eliminateSelector:(id)a0 forSetJob:(BOOL)a1 indicatingWhenEliminated:(BOOL)a2;
- (void)_informConnectorActiveJobFinishedforSelector:(id)a0 withPotentialNetworkFailure:(BOOL)a1;
- (void).cxx_destruct;
- (void)_informConnectorTriggeredSelectors:(id)a0 withTriggeredRequiringRetry:(id)a1;
- (id)_newSetPolicyForDomainName:(id)a0 forAssetSetIdentifier:(id)a1 fromLocation:(id)a2;
- (void)_logPersistedConfigLoad:(id)a0 activityIntervalSecs:(long long)a1 pushTriggerSecs:(long long)a2 lastTickDate:(id)a3 message:(id)a4;
- (void)_setActivityCriteria:(id)a0 pushNotificationInitiated:(BOOL)a1 withActivityDelay:(long long)a2;
- (void)_logPersistedConfigSet:(id)a0 activityIntervalSecs:(long long)a1 pushTriggerSecs:(long long)a2 lastTickDate:(id)a3 message:(id)a4;
- (id)defaultSchedulerSetPolicy;
- (void)_performActivityOperations;
- (void)_jobFinishedForSetDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withPotentialNetworkFailure:(BOOL)a2;
- (void)_logPersistedRemovedEntry:(id)a0 removedSelector:(id)a1 message:(id)a2;
- (void)_startPushBackupTrigger;
- (void)_performPushNotificationActivityOperations;
- (void)_jobFinishedForSelector:(id)a0 withPotentialNetworkFailure:(BOOL)a1;

@end
