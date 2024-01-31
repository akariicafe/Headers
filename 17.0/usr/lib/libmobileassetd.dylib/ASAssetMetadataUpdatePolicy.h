@interface ASAssetMetadataUpdatePolicy : NSObject

+ (id)policy;

- (void)getDelay:(double *)a0 andGracePeriod:(double *)a1 forUpdateError:(id)a2;
- (id)serverURLForAssetType:(id)a0;
- (double)defaultNetworkTimeout;
- (id)getSystemAppURL:(id)a0;
- (id)_stringPreferenceValueForKey:(id)a0;
- (char *)trainName;
- (id)checkPreferencesForOverride:(id)a0;
- (void)getDelay:(double *)a0 andGracePeriod:(double *)a1 forUpdateInterval:(double)a2;
- (double)automaticMetadataUpdateIntervalForAssetType:(id)a0;

@end
