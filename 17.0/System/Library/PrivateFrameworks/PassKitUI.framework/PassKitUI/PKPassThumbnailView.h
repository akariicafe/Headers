@class UIImageView, PKPassView, UIView, UIImage, PKPass;

@interface PKPassThumbnailView : UIView {
    unsigned int _options;
    BOOL _needsRasterization;
    UIView *_maskView;
    UIView *_passContainerView;
    PKPassView *_passView;
    UIView *_effectOverlayView;
    UIImageView *_pocketOverlay;
    BOOL _brighten;
    BOOL _preferMinimumHeight;
    BOOL _modallyPresented;
    PKPass *_pass;
    unsigned long long _suppressedContent;
    UIImage *_foregroundPocketOverlayImage;
    double _shadowVisibility;
}

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
