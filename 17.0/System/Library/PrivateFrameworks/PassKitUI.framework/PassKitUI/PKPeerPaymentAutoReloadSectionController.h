@class UIViewController, NSString, PKPeerPaymentAccount, PKPeerPaymentThresholdTopUpController, PKPeerPaymentRecurringPayment;
@protocol PKPaymentPassDetailWrapperSectionControllerDelegate;

@interface PKPeerPaymentAutoReloadSectionController : PKPaymentPassDetailSectionController <PKPeerPaymentServiceObserver, PKPeerPaymentThresholdTopUpControllerDelegate> {
    PKPeerPaymentRecurringPayment *_autoReloadPayment;
    PKPeerPaymentAccount *_account;
    UIViewController<PKPaymentPassDetailWrapperSectionControllerDelegate> *_delegate;
    PKPeerPaymentThresholdTopUpController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validForPaymentPass:(id)a0;

- (void).cxx_destruct;
- (id)sectionIdentifiers;
- (void)recurringPaymentsChanged;
- (id)allSectionIdentifiers;
- (BOOL)_sectionAvailable;
- (void)_updateRecurringPaymentsWithCompletion:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 pass:(id)a1 context:(long long)a2 passLibraryDataProvider:(id)a3;
- (void)preflight:(id /* block */)a0;
- (void)presentAutoReload;
- (id)presentationSceneIdentifierForTopUpController:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (void)thresholdTopUpController:(id)a0 requestsDismissViewController:(id)a1;
- (void)thresholdTopUpController:(id)a0 requestsPopViewController:(id)a1;
- (void)thresholdTopUpController:(id)a0 requestsPresentViewController:(id)a1;
- (void)thresholdTopUpController:(id)a0 requestsPushViewController:(id)a1;
- (void)thresholdTopUpControllerCompletedSetup:(id)a0;
- (id)titleForFooterInSectionIdentifier:(id)a0;

@end
