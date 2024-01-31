@protocol HKTinkerSharingSetupDelegate;

@interface HKTinkerSharingOptInController : BPSWelcomeOptinViewController {
    long long _layoutStyle;
    id<HKTinkerSharingSetupDelegate> _delegate;
}

- (id)detailString;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)titleString;
- (id)alternateButtonTitle;
- (id)imageResource;
- (void)alternateButtonPressed:(id)a0;
- (void)suggestedButtonPressed:(id)a0;
- (id)suggestedButtonTitle;
- (void)_configureLayoutStyle;
- (void)_presentNetworkAccessConfirmationWithHelper:(id)a0;
- (void)applyConfirmedOptin:(BOOL)a0;
- (id)imageResourceBundleIdentifier;
- (id)initWithStyle:(long long)a0 delegate:(id)a1;
- (id)privacyBundles;
- (id)tapToRadarMetadata;
- (void)userDidRequestCancel;
- (BOOL)wantsLightenBlendedScreen;

@end
