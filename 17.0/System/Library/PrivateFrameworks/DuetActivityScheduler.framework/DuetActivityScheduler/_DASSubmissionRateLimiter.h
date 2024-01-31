@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface _DASSubmissionRateLimiter : NSObject

@property (retain, nonatomic) NSMutableDictionary *penaltyBox;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delayedSubmissionQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSMutableDictionary *activityGroupQueue;
@property (retain, nonatomic) NSMutableDictionary *submittedActivities;
@property (retain, nonatomic) NSMutableDictionary *activityGroups;
@property (nonatomic) int dastoolToken;

+ (id)pluginGroupNameForGroupName:(id)a0;
+ (id)groupNameForActivity:(id)a0;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (void)submitActivity:(id)a0 withScheduler:(id)a1;
- (void)updateCapacity:(unsigned long long)a0 forGroupName:(id)a1;
- (void)submitActivities:(id)a0 withScheduler:(id)a1;
- (void)activityCanceled:(id)a0 withScheduler:(id)a1;
- (void)activityCompleted:(id)a0 withScheduler:(id)a1;
- (void)removeFromPenaltyBox:(id)a0;
- (unsigned long long)capacityForGroupName:(id)a0;
- (void)handleCanceledActivity:(id)a0 withGroupName:(id)a1;
- (void)submitActivity:(id)a0 inGroup:(id)a1 withScheduler:(id)a2;
- (BOOL)shouldDelaySubmissionOfActivity:(id)a0;
- (BOOL)shouldQueueActivity:(id)a0;
- (void).cxx_destruct;
- (void)createActivityGroup:(id)a0;
- (BOOL)shouldDelayGroupSubmissionOfActivity:(id)a0;
- (void)addToPenaltyBox:(id)a0 atDate:(id)a1;
- (void)admitNextActivityAfterCompletionOf:(id)a0 withScheduler:(id)a1;
- (void)handleCanceledActivity:(id)a0;

@end
