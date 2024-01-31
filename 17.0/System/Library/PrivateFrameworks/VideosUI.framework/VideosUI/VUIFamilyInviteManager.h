@class NSString, ACAccountStore, AIDAAccountManager;

@interface VUIFamilyInviteManager : NSObject <AIDAAccountManagerDelegate>

@property (readonly, nonatomic) ACAccountStore *store;
@property (readonly, nonatomic) AIDAAccountManager *accountManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)accountsForAccountManager:(id)a0;
- (void).cxx_destruct;
- (void)presentFamilySetupScreenIfEligible:(id)a0 checkEligibility:(BOOL)a1;
- (void)presentFamilySetupScreenWithBuyParams:(id)a0;

@end
