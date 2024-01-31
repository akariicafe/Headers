@class _UIBarButtonItemData, NSMapTable, _UIButtonBar, _UIPointerInteractionAssistant, NSLayoutConstraint;

@interface _UIToolbarContentView : _UIBarContentView {
    _UIButtonBar *_buttonBar;
    _UIPointerInteractionAssistant *_assistant;
    NSLayoutConstraint *_buttonBarLeadingConstraint;
    NSLayoutConstraint *_buttonBarTrailingConstraint;
    NSMapTable *_absorptionTable;
    double _standardEdgeSpacing;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } padding;
@property (nonatomic) long long itemDistribution;
@property (nonatomic) BOOL compactMetrics;
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance;
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance;

- (void)_appearanceChanged;
- (double)defaultTextPadding;
- (void)layoutMarginsDidChange;
- (long long)barType;
- (double)defaultEdgeSpacing;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_directionalSafeArea;
- (void)_setBackButtonBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (double)absorptionForItem:(id)a0;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (unsigned long long)edgesPaddingBarButtonItem:(id)a0;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (void)updateContent;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (id)_computeEdgeAbsorptionForItems:(id)a0;
- (void)tintColorDidChange;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (void)reloadWithItems:(id)a0;
- (void)updateConstraints;
- (void)_ensureButtonBar;
- (void).cxx_destruct;
- (void)updateWithItems:(id)a0 fromOldItems:(id)a1 animate:(BOOL)a2;
- (void)_updateThreeUpFlagsForItems:(id)a0;
- (void)_setButtonBarLeadingInset:(double)a0 trailingInset:(double)a1;

@end
