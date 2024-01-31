@interface CoreIDVUI.IdentityProofingProgressViewController : UIViewController {
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ progressType;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ imageResolutionHelper;
    void /* unknown type, empty encoding */ assetProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ secondaryStackView;
    void /* unknown type, empty encoding */ primaryStackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ imageViewContainer;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateViews;
- (void)updateUI;
- (void)configureFonts;

@end
