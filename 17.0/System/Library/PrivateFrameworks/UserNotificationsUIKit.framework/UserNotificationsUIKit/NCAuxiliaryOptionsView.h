@class UIColor, NSString, NSArray, NSStringDrawingContext, UILabel, BSUIFontProvider, UIView;

@interface NCAuxiliaryOptionsView : UIView <NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting> {
    UILabel *_optionsSummaryLabel;
    UIView *_overlayView;
    double _widthForCachedLayoutInfo;
    unsigned long long _cachedSummaryLabelNumberOfLines;
    NSStringDrawingContext *_drawingContext;
}

@property (retain, nonatomic) BSUIFontProvider *fontProvider;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (retain, nonatomic) NSArray *auxiliaryOptionActions;
@property (readonly, nonatomic) NSArray *auxiliaryOptionButtons;
@property (copy, nonatomic) UIColor *auxiliaryOptionsTextColor;
@property (nonatomic) long long materialRecipe;
@property (copy, nonatomic) UIColor *materialTintColor;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (id)init;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_setContinuousCornerRadius:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_defaultTextColor;
- (void)_calculateOptionsSummaryLabelLayoutInfoForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)_configureAuxiliaryOptionsSummaryTextLabelIfNecessary;
- (void)_configureOverlayIfNecessary;
- (void)_configureOverlayView;
- (void)_layoutOptionsButtons;
- (void)_layoutOptionsSummaryLabel;
- (id)_newOptionsButton;
- (double)_optionsButtonWidthForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 auxiliaryOptionButtonsCount:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_optionsSummaryMeasuringFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_optionsSummaryWidthForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_preferredFontForAuxiliaryOptionsSummaryTextLabel;
- (id)_preferredFontForOptionButton;
- (void)_setDefaultAttributes;
- (unsigned long long)_summaryLabelNumberOfLinesForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTextAttributesForOptionsSummaryLabel;

@end
