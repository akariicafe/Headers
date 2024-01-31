@interface DMCFeatureOverrides : NSObject

+ (BOOL)_isUnknownProduct;
+ (id)modelNumberWithDefaultValue:(id)a0;
+ (id)serviceDiscoveryDefaultPortWithValue:(id)a0;
+ (id)simulatedMDMAccountDrivenEnrollmentDefaultUsername;
+ (id)deviceNameWithDefaultValue:(id)a0;
+ (BOOL)bypassMDMTLSClientAuthentication;
+ (id)serviceDiscoveryFallbackURLWithValue:(id)a0;
+ (id)appleMDMWellKnownURLWithDefaultValue:(id)a0;
+ (BOOL)bypassWatchUnpairWhenUnenrolling;
+ (id)attestationRateLimitOverrideMinutes;
+ (double)enrollmentStepTimeoutThresholdWithDefaultValue:(double)a0;
+ (id)objectForDefaultsKey:(id)a0;
+ (BOOL)allowAnyMAIDToSignIn;
+ (id)stringForDefaultsKey:(id)a0;
+ (double)accountSignInTimeoutThresholdWithDefaultValue:(double)a0;
+ (BOOL)shouldSimulateMDMCommunication;
+ (id)softwareUpdateDeviceIDWithDefaultValue:(id)a0;
+ (BOOL)useNonEphemeralWebAuthSession;
+ (id)activationRecordFlagsWithFlags:(id)a0;
+ (id)serviceDiscoveryDomainWithValue:(id)a0;
+ (id)simulatedMDMAccountDrivenEnrollmentAuthMethod;
+ (id)modelNameWithDefaultValue:(id)a0;
+ (BOOL)sentinelExistsAtPath:(id)a0;
+ (BOOL)shouldSimulateMDMAccountDrivenEnrollment;
+ (id)simulatedMDMAccountDrivenEnrollmentProfile;
+ (id)productNameWithDefaultValue:(id)a0;
+ (id)serviceDiscoveryFallbackServerVersion;
+ (BOOL)useHTTPLogging;
+ (BOOL)boolForDefaultsKey:(id)a0;
+ (BOOL)allowAnyESSOApplicationEntitlements;
+ (BOOL)ignoreEnrollmentMode;
+ (id)gestaltOverrideForKey:(struct __CFString { } *)a0 withDefaultValue:(id)a1;
+ (id)numberForDefaultsKey:(id)a0;
+ (BOOL)watchEnrollmentAllowLocalProfile;
+ (id)dictForDefaultsKey:(id)a0;
+ (id)enrollmentProfileWithDefaultValue:(id)a0;
+ (id)simulatedMDMEnrollmentMode;

@end
