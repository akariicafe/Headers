@class NSString, _UILayerHostView, UIScreen;

@interface SBInteractiveScreenshotGestureHostRootViewController : SBFTouchPassThroughViewController <BSInvalidatable> {
    unsigned int _hostingContextID;
    int _hostingPid;
    _UILayerHostView *_layerHostView;
    UIScreen *_screen;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)invalidate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithScreen:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_reloadLayerHostView;
- (void)setHostingContextID:(unsigned int)a0 pid:(int)a1;

@end
