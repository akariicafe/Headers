@class UIBarButtonItem, NSString, PKLinkedApplication, PKPassView, PKPass;

@interface PKExpiredSinglePassViewController : UIViewController <WLCardViewDelegate, PKPassDeleteHandler, PKExpiredPassesDetailsResponder> {
    PKPass *_pass;
    PKPassView *_passView;
    PKLinkedApplication *_linkedApplication;
    UIBarButtonItem *_deleteBarButton;
    UIBarButtonItem *_recoverBarButton;
    UIBarButtonItem *_flexibleSpace;
    UIBarButtonItem *_infoButton;
    UIBarButtonItem *_shareButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)pass;
- (void).cxx_destruct;
- (id)_infoButton;
- (id)initWithPass:(id)a0;
- (void)passWasUpdated:(id)a0;
- (void)_didPresentDetailViewController;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)a0;
- (void)_deletePassConfirmed;
- (void)_deletePassPressed;
- (void)_expiredPassRemovalConfirmedAsDeletion:(BOOL)a0;
- (void)_moreButtonPressed;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)a0;
- (void)_recoverPassConfirmed;
- (void)_recoverPassPressed;
- (void)_sharePass;
- (void)disableButtons;
- (void)enableButtons;
- (BOOL)handleDeletePassRequestWithPass:(id)a0 forViewController:(id)a1;
- (void)passViewSetup;

@end
