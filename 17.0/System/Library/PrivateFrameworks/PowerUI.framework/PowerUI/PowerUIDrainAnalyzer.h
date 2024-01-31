@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, OS_os_log, _DKKnowledgeQuerying, _CDLocalContext;

@interface PowerUIDrainAnalyzer : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) long long minBatteryLevel;

+ (id)sharedInstance;

- (void)resetState;
- (id)init;
- (void)recordAnalytics;
- (void).cxx_destruct;
- (void)monitorPluggedInStatus;
- (void)recordPredictionResultAndTime;
- (void)scheduleAnalyticsActivity;
- (void)scheduleLowSOCPrediction;
- (void)updateLPMAndMinSOC;

@end
