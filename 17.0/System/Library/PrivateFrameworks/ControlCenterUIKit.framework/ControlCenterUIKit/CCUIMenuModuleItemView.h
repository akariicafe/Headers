@class BSUIEmojiLabelView, NSString, CCUIMenuModuleItem, UIView, MTVisualStylingProvider;

@interface CCUIMenuModuleItemView : UIControl <UIPointerInteractionDelegate> {
    BSUIEmojiLabelView *_titleLabel;
    BSUIEmojiLabelView *_subtitleLabel;
    UIView *_separatorView;
    UIView *_highlightedBackgroundView;
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (nonatomic) BOOL separatorVisible;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) BOOL useTallLayout;
@property (nonatomic) BOOL useTrailingCheckmarkLayout;
@property (nonatomic) BOOL useTrailingInset;
@property (nonatomic) unsigned long long indentation;
@property (retain, nonatomic) CCUIMenuModuleItem *menuItem;
@property (retain, nonatomic) UIView *leadingView;
@property (retain, nonatomic) UIView *trailingView;
@property (nonatomic) BOOL shouldLimitContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_titleFontForContentSizeCategory:(id)a0 shouldLimitContentSizeCategory:(BOOL)a1;
+ (id)_subtitleFontForContentSizeCategory:(id)a0;
+ (id)_titleFontForContentSizeCategory:(id)a0;
+ (id)_preferredFontForTextStyle:(id)a0 hiFontStyle:(long long)a1 contentSizeCategory:(id)a2 shouldLimitContentSizeCategory:(BOOL)a3;
+ (BOOL)_shouldLimitContentSizeCategory:(id)a0 forceLimitContentSizeCategory:(BOOL)a1;
+ (double)defaultMenuItemHeightForContentSizeCategory:(id)a0;
+ (id)_subtitleFontForContentSizeCategory:(id)a0 shouldLimitContentSizeCategory:(BOOL)a1;

- (id)_titleFont;
- (double)_textHeightForEmojiLabel:(id)a0 width:(double)a1;
- (double)_separatorHeight;
- (void)updateSubviewsAlpha:(double)a0;
- (void)_layoutLeadingCustomView;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_setTitle:(id)a0;
- (void)_updateForStateChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)_contentSizeCategoryDidChange;
- (double)_titleBaselineToBottom;
- (void)setEnabled:(BOOL)a0;
- (double)_labelLeadingInset;
- (void)_setSubtitle:(id)a0;
- (void)_stopAutomaticallyUpdatingView:(id)a0 recursivelyIfNeeded:(BOOL)a1;
- (double)_trailingWidthForCustomViews;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)subtitle;
- (BOOL)_shouldHorizontallyCenterText;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (double)_labelTrailingInset;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)title;
- (id)_subtitleFont;
- (BOOL)isEqual:(id)a0;
- (void)layoutSubviews;
- (id)initWithMenuItem:(id)a0;
- (void)_updateVisualStyleOfView:(id)a0 withStyle:(long long)a1 recursivelyIfNeeded:(BOOL)a2;
- (void)setSelected:(BOOL)a0;
- (double)_titleBaselineToTop;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_labelInsets;
- (void)_layoutTrailingCustomViews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
