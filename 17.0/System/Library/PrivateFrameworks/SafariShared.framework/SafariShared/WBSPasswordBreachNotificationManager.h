@class UNUserNotificationCenter, WBSPasswordWarningTopFraudTargetsManager;

@interface WBSPasswordBreachNotificationManager : NSObject {
    UNUserNotificationCenter *_notificationCenter;
    WBSPasswordWarningTopFraudTargetsManager *_topFraudTargetsManager;
}

+ (id)_bodyForHighLevelDomains:(id)a0 deviceClass:(int)a1 topFraudTargets:(id)a2;
+ (id)_bodyForSavedAccounts:(id)a0 withTopFraudTargets:(id)a1;
+ (unsigned long long)_bodyStyleForTopFraudTargetDomains:(id)a0 sensitiveDomains:(id)a1 passwordsCount:(unsigned long long)a2;
+ (BOOL)_highLevelDomain:(id)a0 isIncludedInTopFraudTargets:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_contentWithSavedAccounts:(id)a0 topFraudTargets:(id)a1;
- (id)_titleForSavedAccounts:(id)a0;
- (void)addBreachNotificationForSavedAccounts:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
