@class NSArray, NSString, NSDictionary;

@interface UAFAssetExpansion : NSObject

@property (retain, nonatomic) NSArray *requiredUsageTypes;
@property (retain, nonatomic) NSString *trialFactorTemplate;
@property (retain, nonatomic) NSString *trialFactorFallbackTemplate;
@property (retain, nonatomic) NSString *autoAssetSpecifierTemplate;
@property (retain, nonatomic) NSDictionary *usageValues;

+ (id)getTemplatePart:(id)a0;
+ (BOOL)isValid:(id)a0 validUsageTypes:(id)a1 error:(id *)a2;
+ (BOOL)isValidTemplate:(id)a0 validUsageTypes:(id)a1 error:(id *)a2;
+ (id)specializeTemplate:(id)a0 usages:(id)a1 invalid:(BOOL *)a2 error:(id *)a3;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)getAutoAssetSpecifier:(id)a0;
- (id)getTrialFactorFallbackName:(id)a0;
- (id)getTrialFactorName:(id)a0;
- (BOOL)isValidUsages:(id)a0;
- (id)specializeTemplate:(id)a0 usages:(id)a1;

@end
