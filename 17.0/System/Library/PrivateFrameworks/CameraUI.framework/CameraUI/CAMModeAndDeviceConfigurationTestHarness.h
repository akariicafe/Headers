@class NSMutableArray;

@interface CAMModeAndDeviceConfigurationTestHarness : CAMPerformanceTestHarness

@property (readonly, nonatomic) NSMutableArray *_modeChangeListeners;

- (void)setupListeners;
- (void)stopTesting;
- (void).cxx_destruct;
- (void)startTesting;
- (void)handleDidOpenViewfinderForReason:(long long)a0;
- (void)removeListeners;
- (void)_handleChangeToMode:(id)a0;
- (void)_handleDidCloseViewfinderForReason:(id)a0;
- (void)_handleDidOpenViewfinderForReason:(id)a0;
- (void)_handleWillCloseViewfinderForReason:(id)a0;
- (void)_handleWillOpenViewfinderForReason:(id)a0;
- (void)handleChangeToMode:(long long)a0 device:(long long)a1;
- (void)handleDidCloseViewfinderForReason:(long long)a0;
- (void)handleWillCloseViewfinderForReason:(long long)a0;
- (void)handleWillOpenViewfinderForReason:(long long)a0;
- (id)initWithTestName:(id)a0;
- (void)registerHandler:(id /* block */)a0 forChangeToMode:(long long)a1 devicePosition:(long long)a2;

@end
