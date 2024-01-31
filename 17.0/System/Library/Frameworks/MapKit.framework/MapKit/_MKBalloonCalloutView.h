@class UIColor, _MKMarkerAnnotationBaseImageView, UIImageView, UIImage, UIView, _MKBezierPathView, UIVisualEffectView;

@interface _MKBalloonCalloutView : MKCalloutView {
    UIView *_shadowView;
    UIView *_containerView;
    UIImageView *_balloonBodyImageView;
    UIImageView *_tailView;
    UIView *_innerBackgroundView;
    UIImageView *_imageView;
    struct CGSize { double width; double height; } _intrinsicSize;
    struct CGSize { double width; double height; } _shadowSize;
    double _croppedImageScale;
    UIImageView *_contentViewMaskView;
    UIView *_backgroundView;
    _MKBezierPathView *_backgroundShapeView;
    _MKMarkerAnnotationBaseImageView *_backgroundShapeGradientView;
    _MKMarkerAnnotationBaseImageView *_rectangularImageView;
    UIVisualEffectView *_backgroundVisualEffectView;
    BOOL _centerAnnotationWhenOffscreen;
    BOOL _dismissed;
}

@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL originatesAsSmallBalloon;
@property (nonatomic) double smallBalloonScale;
@property (copy, nonatomic) UIColor *balloonTintColor;
@property (copy, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) UIColor *innerStrokeColor;
@property (copy, nonatomic) UIColor *imageTintColor;
@property (nonatomic) BOOL showsArrow;

- (id)initWithStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_updateStyle;
- (BOOL)calloutContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)_commonInit;
- (void)didMoveToWindow;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerFrame;
- (void)_configureForArrowStateWithDuration:(double)a0;
- (void)_handleTapOnCallout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_idealFrame;
- (double)_innerDiameter;
- (void)_showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)_updateCroppedImage;
- (void)dismissAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)hideCalloutAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithAnnotationView:(id)a0;
- (void)setShowsArrow:(BOOL)a0 animated:(BOOL)a1;
- (void)showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)showCalloutAnimated:(BOOL)a0;
- (void)updateWithNewCalloutOffset;

@end
