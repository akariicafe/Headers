@interface ContentInteractionTestRunner : PageLoadTestRunner

@property (nonatomic) int iterations;

- (void)endTrackingFrameRate;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (id)pageWebView;
- (BOOL)startPageAction:(id)a0;
- (void)startSubtest:(id)a0;
- (void)startTrackingFrameRate;
- (void)stopSubtest:(id)a0;

@end
