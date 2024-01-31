@interface FamilyCircleUI.FamilySettingsApplication : NSObject <AIDAAccountManagerDelegate> {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ aidaAccountManager;
    void /* unknown type, empty encoding */ familyCircleStore;
    void /* unknown type, empty encoding */ servicesStore;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ servicesOwnerManager;
    void /* unknown type, empty encoding */ appleCardStore;
}

- (id)accountsForAccountManager:(id)a0;
- (void)appMovedToBackground;
- (void)appMovedToForeground;
- (id)init;
- (void).cxx_destruct;

@end
