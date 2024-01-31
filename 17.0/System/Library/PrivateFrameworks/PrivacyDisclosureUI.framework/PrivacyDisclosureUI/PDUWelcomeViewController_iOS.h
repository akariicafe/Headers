@class NSString;
@protocol PDUWelcomeViewControllerDelegate, PDCConsentStore, PDCApplicationRecord, PDCApplicationIdentity;

@interface PDUWelcomeViewController_iOS : OBWelcomeController <PDUDisclosureReviewViewControllerDelegate> {
    id<PDCApplicationIdentity> _applicationIdentity;
    id<PDCApplicationRecord> _applicationRecord;
    id<PDCConsentStore> _consentStore;
}

@property (weak, nonatomic) id<PDUWelcomeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)preferredUserInterfaceStyle;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)cancelPressed;
- (void)learnMorePressed;
- (void)continuePressed;
- (id)_requestIconForApplication:(id)a0;
- (void)disclosureReviewViewControllerDidDismiss:(id)a0;
- (id)initWithApplicationIdentity:(id)a0 consentStore:(id)a1;

@end
