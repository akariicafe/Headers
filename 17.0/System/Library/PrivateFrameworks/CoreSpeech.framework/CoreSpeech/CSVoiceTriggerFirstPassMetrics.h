@class NSNumber;

@interface CSVoiceTriggerFirstPassMetrics : NSObject

@property (readonly, nonatomic) NSNumber *firstPassInfoGeneratedTime;
@property (readonly, nonatomic) NSNumber *firstPassInfoProcessedTime;

+ (id)CSVoiceTriggerFirstPassMetricsWithFirstPassInfoGeneratedTime:(unsigned long long)a0 firstPassInfoProcessedTime:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)_initWithFirstPassInfoGeneratedTime:(unsigned long long)a0 firstPassInfoProcessedTime:(unsigned long long)a1;

@end
