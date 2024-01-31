@class _UIOEditMenuPresentationConfiguration, _UIOServerActionOriginContext, _UIEditMenuContainerView;
@protocol UIOverlayServerDisplayDelegate;

@interface _UIEditMenuOverlayUIServerPresentation : _UIEditMenuContentPresentation {
    _UIEditMenuContainerView *_menuContainerView;
    id<UIOverlayServerDisplayDelegate> _displayDelegate;
}

@property (readonly, nonatomic) _UIOEditMenuPresentationConfiguration *presentationConfiguration;
@property (readonly, nonatomic) _UIOServerActionOriginContext *originContext;

- (id)containerView;
- (void).cxx_destruct;
- (BOOL)canPresentEditMenu;
- (id)configureContainerViewWithConfiguration:(id)a0;
- (void)displayMenuForConfiguration:(id)a0 originContext:(id)a1 inDisplayDelegate:(id)a2;
- (long long)initialUserInterfaceStyle;
- (void)sourceViewDidUpdateFromTraitCollection:(id)a0;
- (void)teardownContainerView;
- (BOOL)wantsPasteTouchAuthenticationInEditMenuListView:(id)a0;

@end
