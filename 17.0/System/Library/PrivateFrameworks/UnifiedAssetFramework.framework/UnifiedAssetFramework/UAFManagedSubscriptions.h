@interface UAFManagedSubscriptions : NSObject

+ (id)createHoldSubscription:(id)a0;
+ (id)getExistingSubscription:(id)a0 subscriber:(id)a1;
+ (void)manageAssistantSubscription:(id)a0 withMode:(long long)a1;
+ (void)manageMorphunSystemLocaleSubscription:(id)a0;
+ (void)manageNLSystemLanguageSubscription:(id)a0;
+ (void)manageSubscription:(id)a0 subscriber:(id)a1 assetSets:(id)a2 usageAliases:(id)a3;
+ (id)morphunUsagesForLocale:(id)a0;
+ (id)validateUsageAlias:(id)a0 usageAliasValue:(id)a1;

@end
