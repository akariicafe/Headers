@class NSLayoutConstraint, GKStaticRenderContentView, GKEditActionsView, NSArray, UIView, CALayer, GKHairlineView;

@interface GKCollectionViewCell : GKFocusHighlightingCollectionViewCell {
    BOOL _shouldDisplaySwipeToEditAccessories;
    double _contentOriginX;
}

@property (readonly, nonatomic) GKEditActionsView *editActionsView;
@property (retain, nonatomic) UIView *staticContentView;
@property (retain, nonatomic) GKStaticRenderContentView *contentRenderView;
@property (retain, nonatomic) CALayer *leftGradientMask;
@property (nonatomic) BOOL doesAbutLeftEdge;
@property (retain, nonatomic) GKHairlineView *topHairline;
@property (retain, nonatomic) GKHairlineView *bottomHairline;
@property (retain, nonatomic) NSArray *editActionsConstraints;
@property (retain, nonatomic) NSArray *hairlineConstraints;
@property (retain, nonatomic) NSLayoutConstraint *contentLeftConstraint;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;
@property (retain, nonatomic) id representedItem;
@property (readonly, nonatomic) UIView *interactiveContentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRectForText;
@property (retain, nonatomic) NSArray *editActions;
@property (nonatomic) double editingContentOriginX;

+ (void)registerCellClassesWithCollectionView:(id)a0;

- (void)setNeedsDisplay;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)applyLayoutAttributes:(id)a0;
- (id)popoverSourceView;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)finishEditing;
- (void)_gkEnumerateSubviewsUsingBlock:(id /* block */)a0;
- (void)animateOutSwipeToEditAccessories;
- (void)applyGradientMaskIfNeeded;
- (void)closeForDelete;
- (double)contentViewOriginXWhileEditing;
- (void)didUpdateModel;
- (double)editActionsVisibleWidth;
- (void)prepareEditActionsConstraintsIfNeeded;
- (void)prepareHairlineConstraintsIfNeeded;
- (void)resetEditingContentOrigin;
- (void)setEditActionsVisibleWidth:(double)a0;
- (void)setShouldDisplaySwipeToEditAccessories:(BOOL)a0;
- (void)setUserInteractionEnabledForEditing:(BOOL)a0;
- (void)shutActionPaneAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)touchWithinEditActions:(id)a0;
- (BOOL)userInteractionEnabledForEditing;

@end
