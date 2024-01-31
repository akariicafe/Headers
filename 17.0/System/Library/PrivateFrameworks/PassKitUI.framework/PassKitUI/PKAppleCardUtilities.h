@class PKFamilyMemberCollection, NSString, PKAccountService, PKAccountUserCollection, NSArray, PKAccount, PKPaymentPass, PKPaymentService;

@interface PKAppleCardUtilities : NSObject <PKAccountServiceObserver, PKPaymentServiceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PKAccountService *_accountService;
    PKPaymentService *_paymentService;
    PKAccount *_account;
    PKFamilyMemberCollection *_familyMemberCollection;
    PKAccountUserCollection *_userCollection;
    PKPaymentPass *_pass;
    NSArray *_sentInvitations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountRemoved:(id)a0;
- (id)init;
- (void)dealloc;
- (void)accountChanged:(id)a0;
- (void)featureApplicationAdded:(id)a0;
- (void)didUpdateFamilyMembers:(id)a0;
- (void)featureApplicationChanged:(id)a0;
- (void)featureApplicationRemoved:(id)a0;
- (void).cxx_destruct;
- (id)_contactKeysToFetch;
- (void)accountUsersChanged:(id)a0 forAccountIdentifier:(id)a1;
- (id)_activeAccountUserWithAltDSID:(id)a0;
- (void)_fetchDataIfNecessaryWithCompletion:(id /* block */)a0;
- (id)_pendingSentInvitationWithAltDSID:(id)a0;
- (void)appleCardAccessLevelForAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)appleCardAccountStateWithCompletion:(id /* block */)a0;
- (void)appleCardIsSharedWithWithAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)appleCardTransactionLimitForAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)hasAppleCardWithCompletion:(id /* block */)a0;
- (void)hasSentPendingAppleCardInvitationToUserWithAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)presentAppleCardSharingDetailsForAltDSID:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (void)presentAppleCardSharingDetailsForAltDSID:(id)a0 viewController:(id)a1 hideUserDetailHeader:(BOOL)a2 completion:(id /* block */)a3;
- (void)presentAppleCardUserInvitationFlowWithViewController:(id)a0 completion:(id /* block */)a1;

@end
