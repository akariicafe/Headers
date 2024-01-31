@class UIImage, UIImageView, UIView;

@interface _SFDownloadsIconView : UIView {
    UIView *_circleContainerView;
    UIImageView *_circleImageView;
    UIView *_arrowContainerView;
    UIImageView *_arrowImageView;
    BOOL _suppressesPixelAlignment;
    BOOL _pulsing;
}

@property (nonatomic) double iconScale;
@property (retain, nonatomic) UIImage *circleImage;
@property (retain, nonatomic) UIImage *arrowImage;
@property (nonatomic) BOOL suppressesPixelAlignment;

- (void)_setUp;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)pulse;
- (void)_updateSuppressesPixelAlignment;
- (void)_finishedPulsing;
- (id)_makeSpringAnimationWithDelay:(double)a0 offset:(double)a1;
- (void)_setPulsing:(BOOL)a0;

@end
