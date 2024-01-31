@interface GKContactsIntegrationUserSettings : NSObject

+ (void)applySettingsToObject:(id)a0 fromResults:(id)a1;
+ (id)associationIDFromServerResult:(id)a0;
+ (id)dateFromServerResult:(id)a0;
+ (int)integrationConsentValueFromServerResult:(id)a0;

@end
