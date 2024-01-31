@class _UISheetPresentationControllerConfiguration, FBSceneWorkspace, SHSheetUIServiceClientContext, FBSDisplayConfiguration, UIView, FBScene, NSString;
@protocol UIScenePresenter, SHSheetSession, SHSheetSceneDelegate;

@interface SHSheetScene : NSObject <FBSceneDelegate, FBSceneObserver, _UIRemoteSheet> {
    _UISheetPresentationControllerConfiguration *__sheetConfiguration;
}

@property (class, readonly, nonatomic) FBSceneWorkspace *sceneWorkspace;

@property (readonly, weak, nonatomic) id<SHSheetSession> session;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (retain, nonatomic) SHSheetUIServiceClientContext *sessionContext;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } framePortrait;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsetsPortrait;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) long long hostProcessType;
@property (nonatomic) BOOL foreground;
@property (nonatomic) BOOL activeUpdate;
@property (nonatomic) BOOL needsFenceAnimation;
@property (weak, nonatomic) id<SHSheetSceneDelegate> delegate;
@property (readonly, nonatomic) UIView *sceneView;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, setter=_setSheetConfiguration:) _UISheetPresentationControllerConfiguration *_sheetConfiguration;
@property (nonatomic, setter=_setViewClipsToBounds:) BOOL _viewClipsToBounds;

- (id)initWithSession:(id)a0;
- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)dealloc;
- (void)updateWithChange:(id /* block */)a0;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)setInterfaceOrientation:(long long)a0;
- (void)setDisplayConfiguration:(id)a0;
- (void)sendAction:(id)a0;
- (void)_configureSceneSettings:(id)a0;
- (void)_didUpdateApplicationState:(id)a0;
- (void)_registerForApplicationStateChangeNotification;
- (void)_unregisterForApplicationStateChangeNotification;
- (void)_updateSettingsWithFence:(id /* block */)a0 transitionCoordinator:(id)a1;
- (void)updateWithChange:(id /* block */)a0 transitionCoordinator:(id)a1;

@end
