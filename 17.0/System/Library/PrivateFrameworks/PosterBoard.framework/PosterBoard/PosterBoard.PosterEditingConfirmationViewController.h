@interface PosterBoard.PosterEditingConfirmationViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ posterID;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ previewStackView;
    void /* unknown type, empty encoding */ lockPreviewImageView;
    void /* unknown type, empty encoding */ homePreviewContainerView;
    void /* unknown type, empty encoding */ homePreviewContentView;
    void /* unknown type, empty encoding */ lockPreviewWidthConstraint;
    void /* unknown type, empty encoding */ homePreviewWidthConstraint;
    void /* unknown type, empty encoding */ lockPreviewHeightConstraint;
    void /* unknown type, empty encoding */ homePreviewHeightConstraint;
    void /* unknown type, empty encoding */ lockPreviewLoadingIndicator;
    void /* unknown type, empty encoding */ homePreviewLoadingIndicator;
    void /* unknown type, empty encoding */ continueButton;
    void /* unknown type, empty encoding */ customizeHomeButton;
    void /* unknown type, empty encoding */ buttonFont;
    void /* unknown type, empty encoding */ lockPreviewImage;
    void /* unknown type, empty encoding */ homePreviewView;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;

@end
