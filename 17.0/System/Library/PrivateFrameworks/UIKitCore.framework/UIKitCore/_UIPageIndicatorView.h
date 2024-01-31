@class UIColor, _UIPageIndicatorProgressView, UIViewFloatAnimatableProperty, _UIPageIndicatorImageView, UIImage;

@interface _UIPageIndicatorView : UIView

@property (readonly, nonatomic) _UIPageIndicatorImageView *imageView;
@property (readonly, nonatomic) _UIPageIndicatorProgressView *progressView;
@property (readonly, nonatomic) UIViewFloatAnimatableProperty *expandProgress;
@property (readonly, nonatomic) long long offsetDirection;
@property (nonatomic) long long page;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL supportsExpandedIndicator;
@property (readonly, nonatomic) long long mode;
@property (nonatomic) long long direction;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *activeImage;
@property (retain, nonatomic) UIColor *indicatorColor;
@property (retain, nonatomic) UIColor *activeIndicatorColor;
@property (nonatomic) float currentProgress;
@property (nonatomic) struct CGSize { double width; double height; } defaultModeSize;
@property (nonatomic) struct CGSize { double width; double height; } expandedModeSize;

- (BOOL)_isDefaultSymbolImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_currentImageContentInsets;
- (long long)_transitionDirection;
- (BOOL)_hasOngoingExpandTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (void)setMode:(long long)a0 direction:(long long)a1;
- (void)_updateProgressBar;
- (double)currentExpandProgress;
- (void)_updateIndicatorExpandProgress;
- (void).cxx_destruct;
- (id)debugDescription;
- (struct CGSize { double x0; double x1; })_adjustedExpandedModeSize;
- (struct CGSize { double x0; double x1; })_adjustedDefaultModeSize;
- (void)prepare;
- (BOOL)isInvalidated;
- (struct CGSize { double x0; double x1; })sizeForImage:(id)a0 traits:(id)a1;
- (void)layoutSubviews;
- (void)_updateImage;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
