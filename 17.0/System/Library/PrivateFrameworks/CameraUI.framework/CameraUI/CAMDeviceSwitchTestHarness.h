@class CAMViewfinderViewController;

@interface CAMDeviceSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness

@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController;
@property (readonly, nonatomic) long long desiredDevicePosition;
@property (readonly, nonatomic) long long startingCaptureMode;
@property (readonly, nonatomic, getter=isTestingAnimation) BOOL testingAnimation;
@property (readonly, nonatomic) double testExtensionSeconds;

- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 viewfinderViewController:(id)a1 devicePosition:(long long)a2 testingAnimation:(BOOL)a3 startingCaptureMode:(long long)a4 testExtensionSeconds:(double)a5;
- (void)startTesting;
- (void)_internalStopTesting;
- (void)ensureCaptureDevicePosition:(long long)a0 mode:(long long)a1 thenPerform:(id /* block */)a2;
- (void)handleDidOpenViewfinderForReason:(long long)a0;

@end
