@class PKPaymentPass, NSString, PKPaymentAutoReloadSetupController, UIViewController;
@protocol PKPaymentPassDetailWrapperSectionControllerDelegate, PKPaymentPassDetailAutoReloadActionSectionControllerDelegate;

@interface PKPaymentPassDetailAutoReloadActionSectionController : PKPaymentPassDetailSectionController <PKPaymentAutoReloadSetupControllerDelegate, PKPaymentPassDetailAutoReloadActionSectionControllerDelegate> {
    NSString *_reloadAmount;
    NSString *_threshold;
    NSString *_name;
    PKPaymentPass *_pass;
    BOOL _isMerchantAutoTopEnabled;
    BOOL _isWalletAutoTopEnabled;
    long long _viewStyle;
    PKPaymentAutoReloadSetupController *_autoReloadSetupController;
    UIViewController<PKPaymentPassDetailWrapperSectionControllerDelegate> *_delegate;
}

@property (weak, nonatomic) id<PKPaymentPassDetailAutoReloadActionSectionControllerDelegate> setupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validForPaymentPass:(id)a0;

- (void).cxx_destruct;
- (void)launchURL:(id)a0;
- (id)sectionIdentifiers;
- (id)allSectionIdentifiers;
- (void)autoReloadSetupController:(id)a0 requestsDismissViewController:(id)a1;
- (void)autoReloadSetupController:(id)a0 requestsPopViewController:(id)a1;
- (void)autoReloadSetupController:(id)a0 requestsPresentViewController:(id)a1;
- (void)autoReloadSetupController:(id)a0 requestsPushViewController:(id)a1;
- (void)autoReloadSetupControllerDidCancel:(id)a0;
- (void)autoReloadSetupControllerDidCompleteWithAmount:(id)a0 threshold:(id)a1;
- (id)initWithPass:(id)a0 paymentDataProvider:(id)a1 viewStyle:(long long)a2 delegate:(id)a3;
- (void)presentAutoReloadSetupViewController;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)titleForFooterInSectionIdentifier:(id)a0;

@end
