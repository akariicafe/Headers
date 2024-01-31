@class _SBDeviceApplicationSceneClassicHostPositioningView, NSArray, NSString, SBDeviceApplicationSceneHandle, SBSwitcherChamoisSettings, SBAppSwitcherDefaults;
@protocol BSDefaultObserver;

@interface SBDeviceApplicationSceneClassicWrapperView : UIView <PTSettingsKeyObserver> {
    _SBDeviceApplicationSceneClassicHostPositioningView *_positioningView;
    SBAppSwitcherDefaults *_appSwitcherDefaults;
    id<BSDefaultObserver> _chamoisEnabledObserver;
    SBSwitcherChamoisSettings *_chamoisSettings;
    BOOL _canRasterize;
}

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) NSArray *contentViews;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL wantsBlackBackground;
@property (nonatomic) BOOL suppressLayoutUpdatesForStartOfClassicPhoneAppRotation;
@property (nonatomic) BOOL preparingForUserDrivenClassicRotation;
@property (nonatomic) long long startingOrientationForClassicPhoneAppRotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseWrapperViewForSceneHandle:(id)a0;

- (void)dealloc;
- (void)addContentView:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithSceneHandle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_effectiveSceneBounds;
- (BOOL)_isProbablyScreenSized;
- (BOOL)_shouldRasterizePositioningLayer;
- (void)_windowingModeChanged;
- (void)removeContentView:(id)a0;

@end
