@class NSDictionary, NSNumber, NSArray;

@interface _DKSync3Policy : NSObject <_DKSync3PolicyCommonMethods> {
    BOOL _syncDisabled;
    BOOL _isSingleDevice;
    BOOL _isOnPower;
    NSNumber *_version;
    unsigned long long _triggeredSyncDelayInSeconds;
    long long _mask;
    NSArray *_sourceDevices;
    NSArray *_destinationDevices;
    NSArray *_transportPolicies;
    NSArray *_featurePolicies;
}

@property (retain, nonatomic) NSDictionary *properties;

+ (BOOL)cloudSyncDisabled;
+ (id)productVersion;
+ (id)userDefaults;
+ (BOOL)rapportSyncDisabled;
+ (void)_possiblyAddToArray:(id)a0 ifTransport:(long long)a1 existsInTransports:(long long)a2;
+ (void)addToDictionary:(id)a0 streamNamesToAlwaysSync:(id)a1;
+ (id)computePolicyDictionaryWithDefaultSyncPolicyDict:(id)a0 syncPolicyOverridesDict:(id)a1 topLevelDefaultsPolicy:(id)a2;
+ (id)computedPolicyDictionary;
+ (id)configurationPlistForFilename:(id)a0;
+ (id)disabledPolicy;
+ (void)fillPolicyCache:(id)a0 bySplittingPolicyDictionary:(id)a1;
+ (void)handleDownloadSyncPolicyResponse:(id)a0 data:(id)a1 error:(id)a2;
+ (void)overrideDictionary:(id)a0 withOverrides:(id)a1;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)a0;
+ (id)syncPolicyConfigPathForFilename:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_anyFeaturePropertyValueWithKey:(id)a0 getterBlock:(id /* block */)a1;
- (unsigned long long)_maximumPropertyValueWithKey:(id)a0 policies:(id)a1 skipZeroValues:(BOOL)a2;
- (unsigned long long)_minimumPropertyValueWithKey:(id)a0 policies:(id)a1 skipZeroValues:(BOOL)a2;
- (unsigned long long)minimumTimeBetweenSyncsInSecondsMaximumValue;

@end
