@interface MCFeatureOverrides : NSObject

+ (BOOL)isDevFused;
+ (BOOL)boolForDefaultsKey:(id)a0 isPresent:(BOOL *)a1;
+ (BOOL)allowUnsupervisedWatchEnrollment;
+ (id)_numberForDefaultsKey:(id)a0 isPresent:(BOOL *)a1;
+ (int)profileEventsExpirationInterval;
+ (BOOL)shouldSimulatorSupportMDM;
+ (unsigned long long)profileEventsMaxLength;
+ (BOOL)allowVPNInUserEnrollment;
+ (BOOL)isAppleInternal;
+ (BOOL)boolForDefaultsKey:(id)a0;
+ (BOOL)shouldDisablePlatformPayloadFilter;
+ (double)accountRemovalTimeoutWithDefaultValue:(double)a0;

@end
