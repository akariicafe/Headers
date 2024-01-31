@class _UIBarCustomizationItem, NSArray, NSString, _UIBarCustomizationChicletAnchorView, UILabel, UIView, UIPointerInteraction;

@interface _UIBarCustomizationChiclet : UIView <UIPointerInteractionDelegate>

@property (retain, nonatomic) UIView *contentWrapperView;
@property (retain, nonatomic) UIView *rootItemView;
@property (retain, nonatomic) NSArray *subitemViews;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (nonatomic) BOOL platterVisible;
@property (nonatomic) BOOL labelVisible;
@property (nonatomic) BOOL minimized;
@property (readonly, nonatomic) BOOL fixed;
@property (nonatomic) long long chicletSize;
@property (weak, nonatomic) _UIBarCustomizationChicletAnchorView *anchorView;
@property (readonly, weak, nonatomic) _UIBarCustomizationItem *representedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })_currentContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)sizeToFit;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_addContentView:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_contentSizeWithInterItemSpacing:(double)a0;
- (double)_currentInterItemSpacing;
- (double)_interItemSpacingForChicletSize:(long long)a0;
- (BOOL)_isDisplayingRootItem;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; id x2; BOOL x3; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; } x4; } *)a0;
- (void)_updatePlatterShadow;
- (struct CGSize { double x0; double x1; })fittingSizeWithChicletSize:(long long)a0;
- (id)initWithItem:(id)a0;
- (void)updateItemCenterPoints;

@end
