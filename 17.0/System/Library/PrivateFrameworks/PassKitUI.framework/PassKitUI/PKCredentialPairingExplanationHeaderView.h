@class UIImageView, UIActivityIndicatorView, PKSubcredentialPairingFlowControllerContext, UIVisualEffectView;

@interface PKCredentialPairingExplanationHeaderView : UIView {
    UIImageView *_imageView;
    PKSubcredentialPairingFlowControllerContext *_context;
    UIActivityIndicatorView *_spinner;
    UIVisualEffectView *_blurView;
}

@property (nonatomic) BOOL useCompactLayout;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_fallbackPairingImage;
- (void)_loadPairingImage;
- (void)_setPairingImage:(id)a0;
- (void)_showLoadingContent;

@end
