@class UIColor, UIFontMetrics, UIFont;

@interface TFBetaAppLaunchScreenViewSpecification : NSObject

@property (readonly, nonatomic) UIFontMetrics *titleFontMetrics;
@property (readonly, nonatomic) UIFontMetrics *subtitleFontMetrics;
@property (readonly, nonatomic) UIFontMetrics *bodyTitleFontMetrics;
@property (readonly, nonatomic) UIFontMetrics *bodyTextFontMetrics;
@property (readonly, nonatomic) UIFontMetrics *primaryButtonTextFontMetrics;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollViewContentLayoutInsets;
@property (readonly, nonatomic) double viewTopMarginAdditionalPaddingAsFractionOfTotalHeight;
@property (readonly, nonatomic) double bottommostLabelLastBaselineToLockupTopEdge;
@property (readonly, nonatomic) double bottommostLabelLastBaselineToImageTopEdge;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } buttonModuleContentLayoutInsets;
@property (readonly, nonatomic) double buttonBackgroundTopEdgeToPrimaryButtonTopEdge;
@property (readonly, nonatomic) double buttonHeight;
@property (readonly, nonatomic) double interButtonPadding;
@property (readonly, nonatomic) double viewTopMarginToTitleLabelFirstBaseline;
@property (readonly, nonatomic) double titleLabelLastBaselineToSubtitleLabelFirstBaseline;
@property (readonly, nonatomic) double lockupBottomEdgeToBodyTitleLabelFirstBaseline;
@property (readonly, nonatomic) double bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline;
@property (readonly, nonatomic) double primaryButtonCornerRadius;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } headerIconViewSize;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UIFont *subtitleFont;
@property (readonly, nonatomic) UIFont *bodyTitleFont;
@property (readonly, nonatomic) UIFont *bodyTextFont;
@property (readonly, nonatomic) UIFont *primaryButtonTextFont;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *buttonTintColor;
@property (readonly, nonatomic) UIColor *overButtonTintTextColor;
@property (readonly, nonatomic) UIColor *textColor;

- (id)initWithTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)_titleFontStyle;
- (id)_bodyTextFontStyle;
- (id)_bodyTitleFontStyle;
- (id)_createBodyTextFontForTraitCollection:(id)a0;
- (id)_createBodyTitleFontForTraitCollection:(id)a0;
- (id)_createPrimaryButtonTextFontForTraitCollection:(id)a0;
- (id)_createSubtitleFontForTraitCollection:(id)a0;
- (id)_createTitleFontForTraitCollection:(id)a0;
- (id)_primaryButtonTextFontStyle;
- (id)_subtitleFontStyle;

@end
