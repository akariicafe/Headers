@interface USManagedSettingsReader : NSObject

+ (id)currentInterventionType;
+ (id)currentScanningPolicy;
+ (id)subscribeForScanningPolicyChanges:(id /* block */)a0;

@end
