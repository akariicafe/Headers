@class UIPointerInteraction, NSString, SBTopAffordanceDotView, UIView, NSLayoutConstraint;
@protocol SBTopAffordanceDotsViewDelegate;

@interface SBTopAffordanceDotsView : UIButton <UIPointerInteractionDelegate> {
    SBTopAffordanceDotView *_leadingDotView;
    SBTopAffordanceDotView *_centerDotView;
    SBTopAffordanceDotView *_trailingDotView;
    UIView *_hitTestBlocker;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_leadingSpacingConstraint;
    NSLayoutConstraint *_trailingSpacingConstraint;
    NSLayoutConstraint *_hitTestBlockerWidthConstraint;
    NSLayoutConstraint *_hitTestBlockerHeightConstraint;
    NSLayoutConstraint *_hitTestBlockerLeftConstraint;
    UIPointerInteraction *_pointerInteraction;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (weak, nonatomic) id<SBTopAffordanceDotsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)_updateBackgroundColor;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)_dotViews;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
