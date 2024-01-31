@class NSString, NSDictionary, NSArray;

@interface AMSFeatureFlag : NSObject

@property (nonatomic, getter=isCodeComplete) BOOL codeComplete;
@property (copy, nonatomic) NSString *ITFE;
@property (nonatomic, getter=isTestable) BOOL testable;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) NSString *associatedGroup;
@property (nonatomic, getter=isDefaultEnabled) BOOL defaultEnabled;
@property (nonatomic) long long developmentPhase;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *feature;
@property (retain, nonatomic) NSDictionary *flagData;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *featureDescription;
@property (copy, nonatomic) NSString *flagGroup;
@property (retain, nonatomic) NSArray *itfes;
@property (nonatomic, getter=isUserEnabled) BOOL userEnabled;
@property (readonly, nonatomic, getter=isRemote) BOOL remote;

+ (id)allFlagGroups;
+ (BOOL)disableFlagForFeature:(id)a0 domain:(id)a1 error:(id *)a2;
+ (BOOL)disableFlagGroup:(id)a0 error:(id *)a1;
+ (BOOL)enableFlagForFeature:(id)a0 domain:(id)a1 error:(id *)a2;
+ (BOOL)enableFlagGroup:(id)a0 error:(id *)a1;
+ (id)flagForFeature:(id)a0 domain:(id)a1;
+ (id)flagForFeature:(id)a0 domain:(id)a1 searchDirectory:(id)a2;
+ (id)flagGroupWithName:(id)a0;

- (void)_updateInternalEnabledState;
- (void)_enableITFEs;
- (void)_updateUserEnabled:(BOOL)a0;
- (void)_updateDevelopmentPhase;
- (void)_activateFlag;
- (BOOL)hasITFEs;
- (id)initWithFlagData:(id)a0 mutableFeatures:(id)a1 profileFeatures:(id)a2 feature:(id)a3 domain:(id)a4;
- (BOOL)hasITFEWithName:(id)a0;
- (void)activateITFEs;
- (void).cxx_destruct;
- (long long)_developmentPhaseFromGroupType:(long long)a0;
- (long long)groupType;
- (void)_disableITFEs;
- (id)itfesFromString:(id)a0 mutableFeatures:(id)a1 profileFeatures:(id)a2;

@end
