@interface _TtCC9VisionKit25DataScannerViewController4Impl : NSObject <VKAVCaptureFrameProviderDelegate, VKDataScannerViewControllerBridgeDelegate> {
    void /* unknown type, empty encoding */ owner;
}

- (id)init;
- (void).cxx_destruct;
- (void)avCaptureFrameProvider:(id)a0 cameraAccessGranted:(BOOL)a1;
- (void)avCaptureFrameProvider:(id)a0 didCapturePhoto:(id)a1 error:(id)a2;
- (void)avCaptureFrameProvider:(id)a0 didChangeIsRunning:(BOOL)a1;
- (void)avCaptureFrameProviderDidFinishPreparation:(id)a0;
- (void)avCaptureFrameProviderDidZoom:(id)a0;
- (void)cameraRestrictedDidChange:(id)a0;
- (void)frameProvider:(id)a0 didChangeSceneLuminosity:(double)a1;
- (void)frameProvider:(id)a0 didChangeSceneStabilityState:(unsigned long long)a1;

@end
