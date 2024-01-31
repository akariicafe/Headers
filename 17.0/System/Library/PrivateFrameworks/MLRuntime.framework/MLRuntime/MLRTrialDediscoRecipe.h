@class NSString, NSDictionary;

@interface MLRTrialDediscoRecipe : NSObject

@property (readonly, nonatomic) NSString *baseKeyFormat;
@property (readonly, nonatomic) NSDictionary *encodingSchema;
@property (readonly, nonatomic) NSDictionary *dpConfig;
@property (readonly, nonatomic) NSDictionary *dediscoTaskConfig;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAssetURL:(id)a0 configOverride:(id)a1 error:(id *)a2;
- (id)mlrDediscoMetadata;

@end
