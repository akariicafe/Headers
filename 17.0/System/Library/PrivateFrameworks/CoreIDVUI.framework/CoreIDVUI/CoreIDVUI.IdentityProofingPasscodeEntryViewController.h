@interface CoreIDVUI.IdentityProofingPasscodeEntryViewController : UIViewController <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ titleText;
    void /* unknown type, empty encoding */ subtitleText;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ placeHolder;
    void /* unknown type, empty encoding */ minLength;
    void /* unknown type, empty encoding */ maxLength;
    void /* unknown type, empty encoding */ identityProofingCardArtResolutionHelper;
    void /* unknown type, empty encoding */ assetProvider;
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
    void /* unknown type, empty encoding */ addButton;
}

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)dismissKeyboard;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)keyboardDidHideWithNotification:(id)a0;
- (void)cancelButtonClicked;
- (void)addButtonClicked;
- (void)configureFonts;
- (void)configureTextFieldViewColors;
- (void)keyboardDidShowWithNotification:(id)a0;
- (void)updateUI:(id)a0 previousTraitCollection:(id)a1;

@end
