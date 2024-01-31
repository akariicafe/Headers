@class _UIEditMenuContainerView;

@interface _UIEditMenuInProcessPresentation : _UIEditMenuContentPresentation {
    _UIEditMenuContainerView *_menuContainerView;
    _UIEditMenuContainerView *_touchPassthroughView;
}

- (id)containerView;
- (void).cxx_destruct;
- (BOOL)canPresentEditMenu;
- (id)configureContainerViewWithConfiguration:(id)a0;
- (void)teardownContainerView;

@end
