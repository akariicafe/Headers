@class NSString;

@interface ATXHomeScreenLogEngagementKeyTracker : NSObject

@property (readonly, nonatomic) NSString *rotationAggregationKey;
@property (readonly, nonatomic) NSString *rotationBooleanKey;
@property (readonly, nonatomic) NSString *rotationFinalOutcomeKey;

+ (id)keyTrackerForStackEngagementStatus:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithRotationAggregationKey:(id)a0 rotationBooleanKey:(id)a1 rotationFinalOutcomeKey:(id)a2;

@end
