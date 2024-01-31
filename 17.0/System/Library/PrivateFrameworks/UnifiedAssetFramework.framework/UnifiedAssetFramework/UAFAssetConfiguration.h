@class NSString, NSArray, NSDictionary;

@interface UAFAssetConfiguration : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *trialNamespace;
@property (retain, nonatomic) NSString *trialMAAssetType;
@property (retain, nonatomic) NSArray *expansions;
@property (retain, nonatomic) NSDictionary *trialMATargetingTemplate;

+ (BOOL)isValid:(id)a0 validUsageTypes:(id)a1 error:(id *)a2;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)getAutoAssetSpecifier:(id)a0;
- (id)getTrialFactorFallbackName:(id)a0;
- (id)getTrialFactorName:(id)a0;

@end
