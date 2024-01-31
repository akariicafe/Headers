@class NSString, _UIPassthroughScrollInteraction, UIView;

@interface _UIContextMenuContainerView : UIView <_UIPassthroughScrollInteractionDelegate, _UIScrollToTopView> {
    BOOL _lastHitTestWasPassedThroughToInteraction;
    BOOL _inPassthroughViewHitTest;
    BOOL _didDismiss;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
}

@property (weak, nonatomic) UIView *contentWrapperView;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (copy, nonatomic) id /* block */ subtreeTraitPropagationHandler;
@property (copy, nonatomic) id /* block */ sizeChangeHandler;
@property (nonatomic) BOOL passesBackgroundViewTouchesThrough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToWindow:(id)a0;
- (BOOL)isScrollEnabled;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isTransparentFocusItem;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;
- (void)didMoveToWindow;
- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void)_attemptDismiss:(BOOL)a0;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; id x2; BOOL x3; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; } x4; } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 allowsBackgroundInteractionAcrossProccesses:(BOOL)a1;

@end
