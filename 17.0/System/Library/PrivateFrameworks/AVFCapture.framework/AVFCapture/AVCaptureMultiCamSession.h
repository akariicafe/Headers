@interface AVCaptureMultiCamSession : AVCaptureSession {
    float _hardwareCost;
    float _systemPressureCost;
}

@property (class, readonly, nonatomic, getter=isMultiCamSupported) BOOL multiCamSupported;

@property (readonly, nonatomic) float hardwareCost;
@property (readonly, nonatomic) float systemPressureCost;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_removeConnection:(id)a0;
- (void)startRunning;
- (BOOL)_addConnection:(id)a0 exceptionReason:(id *)a1;
- (BOOL)_canAddConnection:(id)a0 failureReason:(id *)a1;
- (BOOL)_canAddInput:(id)a0 failureReason:(id *)a1;
- (BOOL)_canAddOutput:(id)a0 failureReason:(id *)a1;
- (float)_computeISPHardwareCost;
- (id)_physicalDevicePowerInfoSet;
- (void)_updateCosts;
- (void)_updateHardwareCost;
- (void)_updateSystemPressureCost;
- (BOOL)canSetSessionPreset:(id)a0;
- (void)handleVideoInputDevice:(id)a0 activeFormatChanged:(id)a1;

@end
