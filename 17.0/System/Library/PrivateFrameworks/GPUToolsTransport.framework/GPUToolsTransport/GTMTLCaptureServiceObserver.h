@interface GTMTLCaptureServiceObserver : GTServiceObserver <GTMTLCaptureServiceObserver>

- (void)notifyCaptureObjectsChanged:(id)a0;
- (void)notifyCaptureProgress:(id)a0;
- (void)notifyCaptureRequest:(id)a0;
- (void)notifyUnsupportedFenum:(id)a0;

@end
