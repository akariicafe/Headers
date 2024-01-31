@class NSObject;
@protocol OS_os_log;

@interface _OSBatteryDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)behaviorDescription:(long long)a0;
+ (id)predictor;

- (id)init;
- (long long)historicalClassification;
- (void)logCompletion:(id)a0;
- (void).cxx_destruct;
- (id)drainPerDayFromDate:(id)a0 forNumberOfDays:(int)a1;
- (long long)drainForEventsFromStream:(id)a0 matchingQuery:(id)a1;

@end
