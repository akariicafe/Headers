@class TabDocument;

@interface MediaCaptureStatusBarManager : SFMediaCaptureStatusBarManager

@property (class, readonly, nonatomic) MediaCaptureStatusBarManager *sharedManager;

@property (readonly, nonatomic) TabDocument *recordingTabDocument;

- (void)browserControllerWillEnterForeground:(id)a0;
- (void)tabDidBecomeActive:(id)a0;
- (void)browserControllerDidEnterBackground:(id)a0;
- (void)activateApp;
- (void)browserControllerWillEnterTabView:(id)a0;
- (void)browserControllerWillExitTabView:(id)a0;
- (id)statusString;

@end
