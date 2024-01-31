@class REFeatureValue, NSDateInterval;

@interface REDuetEvent : NSObject

@property (readonly, nonatomic) NSDateInterval *interval;
@property (readonly, nonatomic) REFeatureValue *value;
@property (readonly, nonatomic) double confidence;

+ (id)eventWithInterval:(id)a0 value:(id)a1 confidence:(double)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
