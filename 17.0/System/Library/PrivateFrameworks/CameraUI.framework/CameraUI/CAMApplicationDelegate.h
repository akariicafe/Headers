@class CAMLibrarySelectionController, CAMNebulaDaemonProxyManager, CAMIrisVideoController, CAMLocationController, CUCaptureController, CAMCameraRollController, CAMPowerController, CAMKeepAliveController, CAMViewfinderViewController, NSString, CAMBurstController, CAMTimelapseController, CAMProtectionController, CAMRemoteShutterController, CAMMotionController, CAMPersistenceController, UIWindow;

@interface CAMApplicationDelegate : UIResponder <UNUserNotificationCenterDelegate, UIApplicationDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController;
@property (readonly, nonatomic) CAMCameraRollController *cameraRollController;
@property (readonly, nonatomic) CUCaptureController *captureController;
@property (readonly, nonatomic) CAMTimelapseController *timelapseController;
@property (readonly, nonatomic) CAMPersistenceController *persistenceController;
@property (readonly, nonatomic) CAMMotionController *motionController;
@property (readonly, nonatomic) CAMLocationController *locationController;
@property (readonly, nonatomic) CAMPowerController *powerController;
@property (readonly, nonatomic) CAMBurstController *burstController;
@property (readonly, nonatomic) CAMKeepAliveController *keepAliveController;
@property (readonly, nonatomic) CAMProtectionController *protectionController;
@property (readonly, nonatomic) CAMRemoteShutterController *remoteShutterController;
@property (readonly, nonatomic) CAMLibrarySelectionController *librarySelectionController;
@property (readonly, nonatomic) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager;
@property (readonly, nonatomic) CAMIrisVideoController *irisVideoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDefaultImageSnapshotForScreen:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)application:(id)a0 performActionForShortcutItem:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void).cxx_destruct;
- (id)_userInfoForMode:(long long)a0 devicePosition:(long long)a1;
- (void)applicationWillTerminate:(id)a0;
- (BOOL)_createSubsystemsWithLaunchOptions:(id)a0;
- (void)updateShortcutItemsForApplication:(id)a0;
- (void)_requestAuthorizationForNotificationCenter:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;

@end
