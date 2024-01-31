@class CAGradientLayer;

@interface PUPhotoEditShadowView : UIView {
    CAGradientLayer *_gradientMaskLayer;
    BOOL _useVisualEffectView;
}

@property (nonatomic) unsigned long long transparentSide;

+ (Class)layerClass;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)updateGradient;

@end
