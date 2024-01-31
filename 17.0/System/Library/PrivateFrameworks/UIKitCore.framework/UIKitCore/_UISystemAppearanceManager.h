@class UIWindow, NSArray, UIWindowScene, UIScene, NSString;
@protocol BSInvalidatable;

@interface _UISystemAppearanceManager : NSObject <_UISceneComponentProviding>

@property (retain, nonatomic) UIWindowScene *windowScene;
@property (weak, nonatomic) UIWindow *previousWindowDrivingSystemAppearance;
@property (retain, nonatomic) id<BSInvalidatable> stateCaptureToken;
@property (readonly, nonatomic) BOOL homeIndicatorAutoHidden;
@property (readonly, nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long whitePointAdaptivityStyle;
@property (readonly, nonatomic) NSArray *multitaskingDragExclusionRects;
@property (readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property (readonly, nonatomic) long long preferredInterfaceOrientation;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)window:(id)a0 didUpdateSupportedOrientations:(unsigned long long)a1 preferredOrientation:(long long)a2 prefersAnimation:(BOOL)a3;
- (void)dealloc;
- (void)updateWhitePointAdaptivityStyle;
- (void)updateUserInterfaceStyle;
- (void)updateMultitaskingDragExclusionRects;
- (id)initWithScene:(id)a0;
- (void)_handleWindowVisibilityNotification:(id)a0;
- (void)updateContainerBackgroundStyle;
- (void)_windowDrivingSystemAppearanceDidChange:(id)a0;
- (void)updateHomeIndicatorAutoHidden;
- (void)updateScreenEdgesDeferringSystemGestures;
- (void)_logOrientationPreferencesChangeWithOldSupportedOrientations:(unsigned long long)a0 newSupportedOrientations:(unsigned long long)a1 oldPreferredOrientation:(long long)a2 newPreferredOrientation:(long long)a3 animationSettings:(id)a4 fenced:(BOOL)a5;
- (void).cxx_destruct;
- (id)_findWindowDrivingSystemAppearance;

@end
