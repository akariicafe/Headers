@class PKAppleCardUtilities;

@interface FAAppleCardUtilities : NSObject <AppleCardUtilitiesProtocol>

@property (retain, nonatomic) PKAppleCardUtilities *appleCardUtilites;

- (id)init;
- (void).cxx_destruct;
- (void)appleCardAccessLevelForAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)appleCardAccountStateWithCompletion:(id /* block */)a0;
- (void)appleCardIsSharedWithWithAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)appleCardTransactionLimitForAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)hasAppleCardWithCompletion:(id /* block */)a0;
- (void)hasSentPendingAppleCardInvitationToUserWithAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)presentAppleCardSharingDetailsForAltDSID:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (void)presentAppleCardUserInvitationFlowWithViewController:(id)a0 completion:(id /* block */)a1;
- (long long)getAccountState:(long long)a0;
- (unsigned long long)getAcessLevel:(unsigned long long)a0;

@end
