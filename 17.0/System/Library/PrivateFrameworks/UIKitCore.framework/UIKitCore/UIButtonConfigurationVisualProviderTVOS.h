@class NSString, _UIFloatingContentView;

@interface UIButtonConfigurationVisualProviderTVOS : UIButtonConfigurationVisualProvider <_UIFloatingContentViewDelegate> {
    _UIFloatingContentView *_floatingContentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateContentBackdropView;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)effectiveContentView;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)cleanupForVisualProvider:(id)a0;
- (void)contextMenuInteraction:(id)a0 updateStyleForMenuWithConfiguration:(id)a1 style:(id)a2;
- (void)floatingContentView:(id)a0 isTransitioningFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (id)_floatingContentView;
- (void).cxx_destruct;
- (void)_updateBackgroundViewWithConfiguration:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)_layoutFloatingContentView;

@end
