@class NSString, NSDictionary, UAFConfigurationManager;

@interface UAFUsageAliasConfiguration : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *values;
@property (retain, nonatomic) UAFConfigurationManager *assetSetManager;

+ (id)fromContentsOfURL:(id)a0 assetSetManager:(id)a1 error:(id *)a2;
+ (BOOL)isValid:(id)a0 assetSetManager:(id)a1 error:(id *)a2;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (id)getTrialAssets:(id)a0;
- (id)getAssetSetTrialAssets:(id)a0 usageValue:(id)a1;
- (id)initWithDictionary:(id)a0 assetSetManager:(id)a1;

@end
