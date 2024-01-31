@class SBAppViewController, NSString;

@interface SBLeftOfHomeAppViewController : UIViewController <SBHVisibleContentPresenter, SBApplicationHosting>

@property (class, readonly, nonatomic, getter=isEnabled) BOOL enabled;

@property (retain, nonatomic) SBAppViewController *appViewController;
@property (nonatomic) unsigned long long contentVisibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)conformsToSBApplicationHosting;
- (id)hostedAppSceneHandles;
- (BOOL)isHostingAnApp;
- (void)viewDidLoad;
- (id)hostedAppSceneHandle;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (void)setHostedAppReferenceSize:(struct CGSize { double x0; double x1; })a0 withInterfaceOrientation:(long long)a1;
- (BOOL)canHostAnApp;
- (void).cxx_destruct;

@end
