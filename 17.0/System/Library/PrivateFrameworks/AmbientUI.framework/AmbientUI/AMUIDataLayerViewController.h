@class NSString, NSDictionary, UIView, UIViewController;
@protocol AMUIDateProviding, AMUIAmbientViewControlling, AMUIDataLayerViewControllerDelegate;

@interface AMUIDataLayerViewController : UIViewController <AMUIAmbientViewControlling, AMUIOpacityAdjusting, AMUIInfographViewControllerDelegate> {
    UIViewController<AMUIAmbientViewControlling> *_concreteDataLayerViewController;
}

@property (nonatomic) long long chromeOrientationPolicy;
@property (readonly, nonatomic) long long currentDataLayout;
@property (weak, nonatomic) id<AMUIDataLayerViewControllerDelegate> delegate;
@property (retain, nonatomic) id<AMUIDateProviding> dateProvider;
@property (readonly, nonatomic) NSDictionary *activeConfigurationMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *viewForOpacityAdjustment;

+ (Class)_dataLayerClassForConfiguration:(id)a0;
+ (long long)_dataLayoutForDataLayerClass:(Class)a0;
+ (long long)dataLayoutForConfiguration:(id)a0;

- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)viewDidLoad;
- (void)invalidate;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (BOOL)handleDismiss;
- (id)createUnlockRequestForViewController:(id)a0;
- (void)requestUnlockForViewController:(id)a0 withRequest:(id)a1 completion:(id /* block */)a2;
- (void)_registerForAmbientPresentationTraitChanges;
- (id)ambientDefaultsForViewController:(id)a0;
- (id)defaultWidgetDescriptorStacksForViewController:(id)a0;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (void)setChromeVisibility:(BOOL)a0 withAnimationSettings:(id)a1 animationFence:(id)a2;
- (void)setDateTimeLayerHidden:(BOOL)a0;
- (BOOL)updatePosterConfiguration:(id)a0 withAnimationSettings:(id)a1;
- (void)viewController:(id)a0 didUpdateActiveConfigurationMetadata:(id)a1;
- (void)viewControllerWillBeginConfiguration:(id)a0;
- (void)viewControllerWillBeginShowingTemporaryOverlay:(id)a0;
- (void)viewControllerWillEndConfiguration:(id)a0;
- (void)viewControllerWillEndShowingTemporaryOverlay:(id)a0;
- (id)widgetHostManagerForViewController:(id)a0;

@end
