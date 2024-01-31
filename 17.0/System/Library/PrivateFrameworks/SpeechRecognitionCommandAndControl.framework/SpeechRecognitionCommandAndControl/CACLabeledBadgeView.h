@class NSString, UIImageView, CACAdaptiveBackdropView, UILabel;

@interface CACLabeledBadgeView : UIView

@property (retain, nonatomic) UIImageView *badgeMaskImageView;
@property (retain, nonatomic) CACAdaptiveBackdropView *_backdropView;
@property (retain, nonatomic) UILabel *_labelView;
@property (nonatomic) BOOL isContrastBackdrop;
@property (readonly) NSString *label;
@property (readonly) long long arrowOrientation;
@property (readonly) long long badgePresentation;
@property (readonly) long long badgeIndicatorMask;

+ (id)_badgeFont;
+ (id)imageBundle;
+ (id)_badgeFontTextStyle;
+ (id)_badgeImageWithDoubleRightArrow;
+ (id)_badgeImageWithNoArrowAndBorder;
+ (id)_maskImageForArrowOrientation:(long long)a0 badgePresentation:(long long)a1 badgeIndicator:(long long)a2;
+ (id)_badgeImageWithNoArrow;
+ (id)_badgeImageWithRightArrow;
+ (id)_badgeImageWithTinyRightArrow;
+ (double)_heightForBadgeWithText;
+ (double)badgeFontSize;
+ (struct CGSize { double x0; double x1; })sizeOfBadgeGivenNumberOfDisplayedDigits:(long long)a0 arrowOrientation:(long long)a1 badgePresentation:(long long)a2 badgeIndicator:(long long)a3;

- (void)_setUpSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copy;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 label:(id)a1 arrowOrientation:(long long)a2 badgePresentation:(long long)a3 badgeIndicator:(long long)a4 isContrasted:(BOOL)a5;
- (id)contrastedCopy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 label:(id)a1 arrowOrientation:(long long)a2 badgePresentation:(long long)a3 badgeIndicator:(long long)a4;

@end
