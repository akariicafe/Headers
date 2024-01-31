@class PKHeroCardExplainationHeaderView, NSString, NSArray, PKSharePreviewOverviewSectionController, PKPassShareRedemptionActivationCodeSectionController, PKPassEntitlementsComposer, OBPrivacyLinkController, PKShareRedemptionAnalyticsReporter, PKPassShareActivationOptions;

@interface PKPassShareRedemptionViewController : PKPaymentSetupOptionsViewController <PKPassShareRedemptionActivationCodeSectionControllerDelegate, PKSharePreviewOverviewSectionControllerDelegate> {
    PKPassShareRedemptionActivationCodeSectionController *_activationCodeSectionController;
    PKSharePreviewOverviewSectionController *_sharePreviewSectionController;
    PKPassEntitlementsComposer *_entitlementComposer;
    OBPrivacyLinkController *_privacyLinkController;
    PKShareRedemptionAnalyticsReporter *_analyticsReporter;
}

@property (nonatomic) BOOL analyticsEnabled;
@property (readonly, nonatomic) PKShareRedemptionAnalyticsReporter *analyticsReporter;
@property (retain, nonatomic) NSString *referralSource;
@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions;
@property (retain, nonatomic) NSArray *displayableSharedEntitlements;
@property (readonly, nonatomic) PKHeroCardExplainationHeaderView *cardHeaderView;
@property (retain, nonatomic) NSString *continueButtonText;
@property (retain, nonatomic) NSString *continueLaterText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)_reloadSections;
- (void)cancelButtonPressed;
- (void)setHeaderImage:(id)a0;
- (void)_configureHeaderSize;
- (void)_setDisplayableSharedEntitlements:(id)a0;
- (void)_updateContinueButtonState;
- (void)activationCodeDidChange;
- (void)activationCodeDidChangeToCode:(id)a0;
- (void)continueButtonPressed;
- (void)continueLaterButtonPressed;
- (void)setIsEnteringActivationCode:(BOOL)a0;
- (void)sharePreviewSectionControllerDidSelectEntitlements:(id)a0;
- (void)sharePreviewSectionControllerDidUpdateEntitlements:(id)a0;
- (void)showFailureUI;
- (void)showLoadingUI;
- (void)showStartingUI;
- (void)showSuccessUI;

@end
