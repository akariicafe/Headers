@interface PPSCoreUtilities : NSObject

+ (BOOL)hasCapability:(int)a0;
+ (id)mergeNestedDictionary:(id)a0 withDict:(id)a1;
+ (id)deviceCapabilityMapping;
+ (id)getAllowlist;
+ (id)getPrivacyAllowlist;
+ (id)getTestAllowlist;
+ (BOOL)isAllowedMetric:(id)a0;
+ (BOOL)isAllowedPopulation:(int)a0;
+ (BOOL)isAllowedSubsystem:(id)a0;
+ (BOOL)isAllowedSubsystem:(id)a0 category:(id)a1;
+ (BOOL)isPrivacySensitive:(id)a0;
+ (BOOL)isValidModeForMetric:(id)a0;
+ (id)md5Hash:(id)a0;
+ (BOOL)shouldLogMetric:(id)a0;
+ (BOOL)shouldOverrideAllowlist;
+ (BOOL)shouldSetupMetric:(id)a0;

@end
