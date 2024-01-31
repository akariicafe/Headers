@class PKContactResolver, PKPeerPaymentAccount, NSArray, PKContactAvatarManager, PKPeerPaymentAssociatedAccountsController, PKFamilyMemberCollection;
@protocol PKPaymentDataProvider;

@interface PKPeerPaymentFamilySettingsViewController : UITableViewController {
    PKContactResolver *_contactResolver;
    PKContactAvatarManager *_contactAvatarManager;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKFamilyMemberCollection *_familyCollection;
    NSArray *_sortedFamilyMemberRowModels;
    PKPeerPaymentAssociatedAccountsController *_peerPaymentAssociatedAccountsController;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)_contactKeysToFetch;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_updateFamilyRows;
- (id)initWithPass:(id)a0 dataProvider:(id)a1 peerPaymentAccount:(id)a2 familyCollection:(id)a3;

@end
