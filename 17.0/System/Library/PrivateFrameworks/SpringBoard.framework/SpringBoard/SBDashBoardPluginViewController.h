@class SBLockScreenPlugin, NSString;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate>

@property (readonly, nonatomic) SBLockScreenPlugin *plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (id)coverSheetIdentifier;
- (long long)presentationPriority;
- (void)_updateLegibility;
- (void)viewWillAppear:(BOOL)a0;
- (long long)presentationType;
- (id)succinctDescriptionBuilder;
- (void)updateForPresentation:(id)a0;
- (id)view;
- (void)viewDidLoad;
- (long long)presentationStyle;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (void)aggregateBehavior:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)performCustomTransitionToVisible:(BOOL)a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (id)_newDisplayLayoutElement;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)presentationTransition;
- (BOOL)handleEvent:(id)a0;
- (void)willTransitionToPresented:(BOOL)a0;
- (long long)_presentationPriority;
- (id)initWithLockScreenPlugin:(id)a0;
- (void)pluginAppearanceDidChange:(id)a0;

@end
