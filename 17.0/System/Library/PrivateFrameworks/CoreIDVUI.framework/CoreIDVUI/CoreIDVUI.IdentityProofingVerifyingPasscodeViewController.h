@interface CoreIDVUI.IdentityProofingVerifyingPasscodeViewController : UIViewController {
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ thresholdTimer;
    void /* unknown type, empty encoding */ identityProofingCardArtResolutionHelper;
    void /* unknown type, empty encoding */ assetProvider;
    void /* unknown type, empty encoding */ titleText;
    void /* unknown type, empty encoding */ subtitleText;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ secondaryStackView;
    void /* unknown type, empty encoding */ primaryStackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ imageViewContainer;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textFieldView;
    void /* unknown type, empty encoding */ config;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)configureFonts;
- (void)configureTextFieldViewColors;
- (void)updateUI:(id)a0 previousTraitCollection:(id)a1;

@end
