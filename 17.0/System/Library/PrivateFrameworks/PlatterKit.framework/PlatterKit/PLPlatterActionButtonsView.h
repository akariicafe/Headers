@class UIStackView, UIColor, _UIStatesFeedbackGenerator, UIAction, PLPlatterActionButton, UIView, NSString;

@interface PLPlatterActionButtonsView : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping>

@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UIStackView *buttonsStackView;
@property (retain, nonatomic) PLPlatterActionButton *defaultActionButton;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *defaultActionFeedbackGenerator;
@property (nonatomic) BOOL didPlayHaptic;
@property (nonatomic) BOOL highlightDefaultActionButton;
@property (nonatomic) double stretchedWidth;
@property (readonly, nonatomic) double defaultWidth;
@property (nonatomic) long long backgroundMaterialRecipe;
@property (retain, nonatomic) UIColor *backgroundTintColor;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIAction *defaultAction;
@property (readonly, nonatomic, getter=isVerticallyStacked) BOOL verticallyStacked;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (void)willMoveToSuperview:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)senderForActionWithIdentifier:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_actuateFeedbackForDefaultActionLockedIfNecessary;
- (void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
- (void)_configureDefaultActionFeedbackIfNecessary;
- (void)_hideNonDefaultActionButtons;
- (void)_layoutButtonsStackView;
- (void)_layoutClippingView;
- (double)_maxAllowedButtonWidth;
- (void)_performNonDefaultActionButtonsHideRevealAnimation:(id /* block */)a0;
- (void)_revealNonDefaultActionButtons;
- (unsigned long long)_widthMultipleForVerticallyStackedButtonsWithCount:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actions:(id)a1 cornerRadius:(double)a2 shouldVerticallyStack:(BOOL)a3;

@end
