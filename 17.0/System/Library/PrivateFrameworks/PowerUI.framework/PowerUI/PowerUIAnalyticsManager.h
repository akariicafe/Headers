@class BMSource, NSObject;
@protocol OS_os_log, OS_dispatch_queue, _DKKnowledgeQuerying;

@interface PowerUIAnalyticsManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventSubmissionQueue;
@property (retain, nonatomic) BMSource *engagementStreamSource;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;

+ (id)sharedInstance;
+ (int)convertTimelineStringToOBCEvent:(id)a0;
+ (int)obcModeOfOperationToBiomeModeOfOperation:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)chargingStatisticsForSessionBetween:(id)a0 and:(id)a1;
- (id)chargingStatisticsSince:(id)a0;
- (void)printExistingEvents;
- (id)stringFromEngagementEvent:(id)a0;
- (BOOL)submitEngagementEventWithBatteryLevel:(id)a0 targetSoC:(id)a1 predictedEndOfCharge:(id)a2 modeOfOperation:(int)a3 eventType:(int)a4;

@end
