@class PDCPreflightManager;

@interface CLFPrivacyDisclosureChecker : NSObject

@property (class, readonly, nonatomic) CLFPrivacyDisclosureChecker *sharedInstance;

@property (readonly, nonatomic) PDCPreflightManager *privacyPreflightManager;

- (id)init;
- (void).cxx_destruct;
- (id)relevantBundleIdentifierForBundleIdentifier:(id)a0;
- (BOOL)requiresPreflightForBundleIdentifier:(id)a0;

@end
