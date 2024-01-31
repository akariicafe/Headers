@class NSString, CAMViewfinderViewController;

@interface CAMCameraRollTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerCameraRollTestingDelegate>

@property (readonly, nonatomic) BOOL awaitPreload;
@property (readonly, nonatomic) double settlingDelay;
@property (readonly, nonatomic) BOOL testingWarmPresentation;
@property (readonly, nonatomic, getter=isTestingAnimation) BOOL testingAnimation;
@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopTesting;
- (void).cxx_destruct;
- (void)startTesting;
- (void)_dismissCameraRollImmediately;
- (void)_handlePUDisplayLinkStarted:(id)a0;
- (void)_presentCameraRollAnimated;
- (id)initWithTestName:(id)a0 viewfinderViewController:(id)a1 testingAnimation:(BOOL)a2 testingWarmPresentation:(BOOL)a3 awaitPreload:(BOOL)a4 settlingDelay:(double)a5;
- (void)viewfinderViewController:(id)a0 didDismissPresentedCameraRoll:(id)a1;
- (void)viewfinderViewController:(id)a0 didPresentCameraRoll:(id)a1;
- (void)viewfinderViewController:(id)a0 willPresentCameraRoll:(id)a1 withOneUpController:(id)a2;

@end
