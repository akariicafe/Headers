@class RTDefaultsManager, NSDate;

@interface RTWorkoutSchedulerMetricsTask : NSObject

@property (nonatomic) unsigned long long memoryFootprintAtStart;
@property (nonatomic) unsigned long long memoryFootprintAtFinish;
@property (nonatomic) unsigned long long currentNAtFinish;
@property (nonatomic) unsigned long long currentNAtStart;
@property (retain, nonatomic) NSDate *taskStart;
@property (retain, nonatomic) NSDate *taskFinish;
@property (nonatomic) unsigned long long taskType;
@property (nonatomic) unsigned long long taskRunDailyCount;
@property (nonatomic) long long totalNAtStart;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;

+ (id)defaultsKeyForTaskType:(unsigned long long)a0;
+ (unsigned long long)taskTypeForDefaultsKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithTaskType:(unsigned long long)a0 defaultsManager:(id)a1;
- (void)resetTaskState;
- (unsigned long long)taskRunDailyCountForMetricsTaskType:(unsigned long long)a0;

@end
