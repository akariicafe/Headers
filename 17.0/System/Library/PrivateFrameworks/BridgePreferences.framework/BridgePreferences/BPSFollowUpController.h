@interface BPSFollowUpController : NSObject

+ (id)_currentDevice;
+ (id)_domainAccessorForDevice:(id)a0;
+ (void)addFollowUpForIdentifier:(id)a0 withAttributes:(id)a1 withCompletion:(id /* block */)a2;
+ (id)baseDomainIdentifier;
+ (void)markSkippedSetupPaneClass:(Class)a0 forDevice:(id)a1;
+ (void)markSkippedSetupPaneClassForCurrentDevice:(Class)a0;
+ (void)removeFollowUpForIdentifier:(id)a0 withCompletion:(id /* block */)a1;
+ (void)removeSkippedPaneClass:(Class)a0 forDevice:(id)a1;
+ (void)removeSkippedPaneClassForCurrentDevice:(Class)a0;
+ (id)skippedSetupPaneClassesForCurrentDevice;
+ (id)skippedSetupPaneClassesForDevice:(id)a0;

@end
