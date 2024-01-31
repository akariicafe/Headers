@class _UIContextMenuStyle, UIView;
@protocol _UIContextMenuPreviewPresentationControllerDelegate;

@interface _UIContextMenuPreviewPresentationController : UIPresentationController {
    UIView *_viewForRemoteTextEffectsWindowMatchAnimation;
}

@property (nonatomic) struct CGSize { double width; double height; } platterContentSize;
@property (nonatomic) BOOL platterContentSizeDidChange;
@property (weak, nonatomic) id<_UIContextMenuPreviewPresentationControllerDelegate> delegate;
@property (retain, nonatomic) _UIContextMenuStyle *menuStyle;

- (void)dismissalTransitionWillBegin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_baseContentInsetsWithLeftMargin:(double *)a0 rightMargin:(double *)a1;
- (BOOL)_shouldOccludeDuringPresentation;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (BOOL)_shouldPreserveFirstResponder;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (long long)presentationStyle;
- (id)preferredFocusEnvironments;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (BOOL)_wantsAutomaticFirstResponderWhenPresentingRemoteViewController;
- (BOOL)_shouldRestoreFirstResponder;
- (void)_updatePlatterContentSizeWithPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)_viewForRemoteTextEffectsWindowMatchAnimation;
- (void)menuDidPresentWithContentPlatterView:(id)a0;
- (void)menuLayoutDidProducePreviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;

@end
