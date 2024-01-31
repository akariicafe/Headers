@class UIWindow, NSArray, NSUserActivity, NSDictionary, NSString, QLPreviewController;

@interface QLDetachedSceneDelegate : NSObject <QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIWindowSceneDelegate>

@property (retain, nonatomic) QLPreviewController *quicklookController;
@property (retain, nonatomic) NSUserActivity *quicklookActivity;
@property (copy, nonatomic) NSArray *urls;
@property (nonatomic) unsigned long long selectedURLIndex;
@property (copy, nonatomic) NSDictionary *editingModes;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneDidDisconnect:(id)a0;
- (void)sceneDidBecomeActive:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (id)stateRestorationActivityForScene:(id)a0;
- (void).cxx_destruct;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)previewController:(id)a0 editingModeForPreviewItem:(id)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (void)previewControllerWillDismiss:(id)a0;
- (id)activityFromOptions:(id)a0;

@end
