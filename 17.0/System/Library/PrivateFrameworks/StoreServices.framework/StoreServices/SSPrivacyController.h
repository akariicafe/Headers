@interface SSPrivacyController : NSObject

+ (id)_appendPrivacyAcknowledgementToActiveAccount:(id)a0 withURL:(id)a1;
+ (void)acknowledgePrivacyLinkWithIdentifier:(id)a0 URL:(id)a1;
+ (id)appStorePrivacyIdentifiers;
+ (void)_appendPrivacyAcknowledgementToLocalAccount:(id)a0;
+ (BOOL)shouldDisplayPrivacyLinkWithIdentifier:(id)a0;
+ (unsigned long long)_currentPrivacyContentVersionForIdentifier:(id)a0;
+ (id)_syncPrivacyAcknowledgementOnAccount:(id)a0 URL:(id)a1;
+ (id)storePrivacyIdentifiers;
+ (id)viewControllerForPrivacySplashWithIdentifier:(id)a0 URL:(id)a1;
+ (void)syncPrivacyAcknowledgementOnAccount:(id)a0 URL:(id)a1;
+ (void)acknowledgePrivacyLinkWithIdentifier:(id)a0;
+ (id)_translateIdentifierToPrivacyAcknowledgement:(id)a0 withVersion:(unsigned long long)a1;
+ (void)_appendPrivacyAcknowledgement:(id)a0 toAccount:(id)a1;

@end
