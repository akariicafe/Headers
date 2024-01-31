@class _UIOEditMenuPresentationConfiguration, NSString, _UIOverlayService, _UIHostedMenuManager;

@interface _UIEditMenuOverlayUIClientPresentation : _UIEditMenuPresentation <_UIOverlayServiceDelegate, _UIOMenuPresentationClient>

@property (readonly, nonatomic) _UIOverlayService *overlayService;
@property (readonly, nonatomic) _UIHostedMenuManager *menuManager;
@property (readonly, nonatomic) _UIOEditMenuPresentationConfiguration *presentationConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)overlayServiceDidInvalidate:(id)a0;
- (void).cxx_destruct;
- (void)_configureOverlayServiceIfNeeded;
- (void)didTransitionFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)displayMenu:(id)a0 configuration:(id)a1;
- (id)displayedMenu;
- (void)handleLifecycleEvent:(long long)a0;
- (void)hideMenuWithReason:(long long)a0;
- (id)initWithDelegate:(id)a0 sourceView:(id)a1;
- (void)performMenuLeafAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)preparedMenuWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)replaceVisibleMenuWithMenu:(id)a0 reason:(long long)a1;
- (void)setDisplayedMenu:(id)a0;
- (void)sourceViewDidUpdateFromTraitCollection:(id)a0;

@end
