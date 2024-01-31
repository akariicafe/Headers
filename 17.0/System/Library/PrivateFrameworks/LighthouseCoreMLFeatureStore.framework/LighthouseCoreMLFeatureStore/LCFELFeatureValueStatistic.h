@class NSString, NSNumber;

@interface LCFELFeatureValueStatistic : NSObject

@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSNumber *count;
@property (readonly, nonatomic) NSNumber *mean;
@property (readonly, nonatomic) NSNumber *stddev;

- (void).cxx_destruct;
- (id)init:(id)a0 count:(id)a1 mean:(id)a2 stddev:(id)a3;

@end
