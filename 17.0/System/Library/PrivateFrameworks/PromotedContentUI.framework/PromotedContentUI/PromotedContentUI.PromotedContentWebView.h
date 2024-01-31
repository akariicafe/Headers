@interface PromotedContentUI.PromotedContentWebView : WKWebView <WKScriptMessageHandler, APWebProcessDelegate> {
    void /* unknown type, empty encoding */ _processDelegate;
    void /* unknown type, empty encoding */ webProcessProxy;
    void /* unknown type, empty encoding */ remoteObjectInterface;
    void /* unknown type, empty encoding */ browserContextControllerDidLoad;
    void /* unknown type, empty encoding */ unfairLock;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void)webProcessDiagnosticJSOStatusReported:(id)a0 status:(id)a1;
- (void)webProcessVideoAdJSODidCallPlayStarted:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallAudioUnmuted:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallFullScreenTapped:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallViewabilityChanged:(BOOL)a0 playTime:(float)a1 volume:(float)a2;
- (void)webProcessVideoAdJSODidCallPlayPaused:(float)a0 volume:(float)a1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessVideoAdJSOCreativeViewLoaded;
- (void)webProcessVideoAdJSODidCallVideoTapped:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)a0 volume:(float)a1;
- (void)webProcessMRAIDJSODidCallOpen:(id)a0;
- (void)webProcessVideoAdJSOGetVideoInfo:(id /* block */)a0;
- (void)webProcessVideoAdJSODidCallVolumeChanged:(float)a0 playTime:(float)a1;
- (void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)a0;
- (void)webProcessMRAIDJSODidCallExpand:(id)a0 withMaximumWidth:(double)a1 andHeight:(double)a2;
- (void)webProcessVideoAdJSODidCallPlayProgressed:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallSkipAdTapped:(float)a0 volume:(float)a1;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)a0;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessVideoAdJSODidCallAudioMuted:(float)a0;
- (void)webProcessVideoAdJSODidCallPlayResumed:(float)a0 volume:(float)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
