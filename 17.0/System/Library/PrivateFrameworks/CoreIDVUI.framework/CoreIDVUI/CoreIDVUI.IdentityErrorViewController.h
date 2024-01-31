@interface CoreIDVUI.IdentityErrorViewController : UIViewController {
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ titleLabelText;
    void /* unknown type, empty encoding */ primaryLabelText;
    void /* unknown type, empty encoding */ secondaryLabelText;
    void /* unknown type, empty encoding */ primaryButtonTitle;
    void /* unknown type, empty encoding */ navigationControllerHelper;
    void /* unknown type, empty encoding */ primaryButtonTargetAction;
    void /* unknown type, empty encoding */ secondaryButtonTargetAction;
    void /* unknown type, empty encoding */ tertiaryButtonTargetAction;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomTray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryButton;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)configureFonts;
- (void)primaryButtonClicked;
- (void)secondaryButtonClicked;

@end
