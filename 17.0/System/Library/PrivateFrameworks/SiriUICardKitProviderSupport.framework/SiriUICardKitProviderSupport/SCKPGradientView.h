@class NSString, CAGradientLayer;

@interface SCKPGradientView : UIView {
    BOOL _isVisible;
}

@property (readonly, nonatomic) CAGradientLayer *layer;
@property (nonatomic) double gradientHeight;
@property (nonatomic) struct CGPoint { double x; double y; } gradientOrigin;
@property (retain, nonatomic) NSString *gradientType;
@property (nonatomic) double gradientStartOpacity;
@property (nonatomic) double gradientEndOpacity;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (id)_fadeInAnimation;
- (id)_fadeOutAnimation;
- (void)_updateGradientOpacity;
- (id)initWithGradientType:(id)a0;

@end
