@class NSArray, UICollectionView, UIImage, UIImageView, _TVStackBackdropView, _TVStackBackdropMaskingView;

@interface _TVStackWrappingView : UIView {
    UIImageView *_backgroundImageView;
    _TVStackBackdropView *_backdropView;
    _TVStackBackdropMaskingView *_maskedBackdropView;
}

@property (retain, nonatomic) UICollectionView *stackView;
@property (copy, nonatomic) NSArray *headerSupplementaryViews;
@property (nonatomic) BOOL shouldAdjustForTabBarSafeAreaInsets;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) BOOL usesBackgroundImage;
@property (retain, nonatomic) UIImage *backdropImage;
@property (nonatomic) BOOL usesBackdropImage;
@property (nonatomic) long long backdropBlurEffectStyle;
@property (nonatomic) double backdropInitialPeek;
@property (nonatomic) double backdropPeekGradient;
@property (nonatomic) double backdropMaskFactor;
@property (readonly, copy, nonatomic) NSArray *supplementaryCellLayoutAttributes;

- (id)preferredFocusEnvironments;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 sectionIndex:(long long)a1;

@end
