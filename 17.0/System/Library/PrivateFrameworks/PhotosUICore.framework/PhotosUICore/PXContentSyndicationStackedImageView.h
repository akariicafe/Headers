@class UIView, NSAttributedString, UIImage, PXRegionOfInterest, UIImageView, PXGradientView, UIVisualEffectView, UILabel;

@interface PXContentSyndicationStackedImageView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIView *darkeningView;
@property (retain, nonatomic) PXGradientView *bottomGradientView;
@property (retain, nonatomic) UILabel *overlayTitleLabel;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isBlurred) BOOL blurred;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long darkenedStyle;
@property (nonatomic) BOOL hasBottomDarkGradient;
@property (copy, nonatomic) NSAttributedString *overlayTitle;
@property (readonly, copy, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
