@class CAMViewfinderViewController;

@interface CAMDeviceAndModeTestHarness : CAMModeAndDeviceConfigurationTestHarness

@property (readonly, nonatomic) long long _desiredPosition;
@property (readonly, nonatomic) long long _desiredMode;
@property (readonly, nonatomic) CAMViewfinderViewController *_viewController;

- (void).cxx_destruct;
- (void)startTesting;
- (id)initWithTestName:(id)a0 devicePosition:(long long)a1 captureMode:(long long)a2 viewFinderViewControl:(id)a3;

@end
