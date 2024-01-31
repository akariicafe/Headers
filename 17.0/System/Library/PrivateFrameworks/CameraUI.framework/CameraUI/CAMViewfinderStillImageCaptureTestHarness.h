@class NSCountedSet, NSString, CAMViewfinderActionIntervalometer, CAMViewfinderViewController;

@interface CAMViewfinderStillImageCaptureTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerStillImageCaptureRequestTestingDelegate, CAMViewfinderActionIntervalometerDelegate>

@property (nonatomic) BOOL _performWarmupCapture;
@property (nonatomic) BOOL _waitingOnWarmupCapture;
@property (retain, nonatomic) NSString *_finalRequestPersistenceUUID;
@property (nonatomic) long long _mode;
@property (retain, nonatomic) NSCountedSet *_requestIDs;
@property (nonatomic) unsigned long long _receivedCallbackCount;
@property (nonatomic) unsigned long long _expectedNumberOfResponsesPerRequest;
@property (nonatomic) double _delayBetweenCaptures;
@property (nonatomic) double _lastCaptureCompletionTime;
@property (retain, nonatomic) CAMViewfinderViewController *_viewfinderViewController;
@property (nonatomic) BOOL _capturesOnTouchDown;
@property (nonatomic) unsigned long long _maxStillImageCount;
@property (nonatomic) unsigned long long _generatedRequestsCount;
@property (retain, nonatomic) CAMViewfinderActionIntervalometer *testIntervalometer;
@property (copy, nonatomic) id /* block */ didUpdateFinalThumbnailHandler;
@property (nonatomic, getter=isStillDuringVideo) BOOL stillDuringVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopTesting;
- (void).cxx_destruct;
- (void)startTesting;
- (void)failedTestWithReason:(id)a0;
- (BOOL)_allowOverlappingCaptures;
- (BOOL)executeAction;
- (void)cancelTesting;
- (id)initWithTestName:(id)a0 maxStillImageCount:(unsigned long long)a1 expectedNumberOfCapturesPerRequest:(unsigned long long)a2 viewfinderViewController:(id)a3 performingWarmupCapture:(BOOL)a4 forCaptureMode:(long long)a5 delayBetweenCaptures:(double)a6 capturesOnTouchDown:(BOOL)a7;
- (BOOL)shouldAttemptAction;
- (void)viewfinderViewController:(id)a0 didReceiveStillImageRequestDidCompleteCapture:(id)a1 error:(id)a2;
- (void)viewfinderViewController:(id)a0 didReceiveStillImageRequestDidCompleteStillImageCapture:(id)a1 withResponse:(id)a2 error:(id)a3;
- (void)viewfinderViewController:(id)a0 didReceiveStillImageRequestDidStopCapturingStillImage:(id)a1;
- (void)viewfinderViewController:(id)a0 didUpdateImageWellWithRequest:(id)a1 response:(id)a2 error:(id)a3;
- (void)viewfinderViewController:(id)a0 willCaptureStillImageForRequest:(id)a1;

@end
