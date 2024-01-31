@interface RPModalPresentationWindow : UIApplicationRotationFollowingWindow

- (id)init;
- (void)dealloc;
- (BOOL)isInternalWindow;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_presentationViewController;
- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)mainWindow;

@end
