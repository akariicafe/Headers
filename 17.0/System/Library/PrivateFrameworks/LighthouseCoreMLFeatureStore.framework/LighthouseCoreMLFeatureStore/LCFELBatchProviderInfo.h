@class NSUUID, NSString, NSDictionary, NSArray, NSNumber;

@interface LCFELBatchProviderInfo : NSObject

@property (readonly, nonatomic) NSUUID *contextId;
@property (readonly, nonatomic) NSUUID *eventId;
@property (readonly, nonatomic) NSString *featureStoreKey;
@property (readonly, nonatomic) NSNumber *timeRange;
@property (readonly, nonatomic) NSNumber *featureCount;
@property (readonly, nonatomic) NSDictionary *totalFeatureStatistics;
@property (readonly, nonatomic) NSArray *positiveFeatureStatistics;
@property (readonly, nonatomic) NSArray *negativeFeatureStatistics;

+ (id)meanOf:(id)a0;
+ (id)standardDeviationOf:(id)a0;

- (void).cxx_destruct;
- (id)init:(id)a0 labelFeatureName:(id)a1;

@end
