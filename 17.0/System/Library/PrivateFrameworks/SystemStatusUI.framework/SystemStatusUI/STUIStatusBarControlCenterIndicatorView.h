@class CALayer, CAGradientLayer;

@interface STUIStatusBarControlCenterIndicatorView : STUIStatusBarImageView {
    BOOL _hidingWithMask;
    CALayer *_maskSolidLayer;
    CAGradientLayer *_maskGradientLayer;
}

@property (nonatomic) BOOL hideWithWipe;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupMaskView;
- (void)_updateMaskFrame;
- (void)_updateMaskLayersFrames;

@end
