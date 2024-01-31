@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (id)init;
- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void)logAlarmDismissAction:(unsigned long long)a0;
- (void)logMultipleTimersAdded:(id)a0;
- (void)logSyncFailedWithError:(id)a0;
- (void)logTimerUpdated;
- (void)logAlarmAdded:(BOOL)a0;
- (void)logSyncCompleted;
- (void)logTimerRepeated;
- (void)logTimerDismissed;
- (void)logAlarmDeleted:(BOOL)a0;
- (void).cxx_destruct;
- (void)logTimerAdded;
- (void)logAlarmUpdated:(BOOL)a0;
- (void)logTimerDeleted;

@end
