@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (double)backgroundNetworkTimeout;
+ (BOOL)getBool:(id)a0 defaultValue:(BOOL)a1;
+ (BOOL)allowsInternalSecurityPolicies;
+ (id)deviceUserAgent;
+ (BOOL)getBool:(id)a0;
+ (double)defaultNetworkTimeout;
+ (id)getIMEnvironmentName;
+ (double)defaultQueryCacheTimeout;
+ (unsigned long long)getEnvironment;
+ (double)failureIgnorePeriod;
+ (double)uiBlockingNetworkTimeout;
+ (double)defaultFollowupTicketLifetime;
+ (double)queryCacheHardTimeout;
+ (id)getOverride:(id)a0;
+ (double)dismissFailureAfterSeenPeriod;
+ (id)automatedDeviceGroup;
+ (BOOL)isAccountsInQA;

- (unsigned long long)getEnvironment;

@end
