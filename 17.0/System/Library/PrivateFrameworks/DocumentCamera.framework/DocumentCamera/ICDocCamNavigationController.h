@interface ICDocCamNavigationController : UINavigationController

- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)_preferredModalPresentationStyle;
- (BOOL)_canShowWhileLocked;
- (void)prepareForDismissal;
- (id)initWithImageCache:(id)a0 docCamDelegate:(id)a1 remoteDocCamDelegate:(id)a2;

@end
