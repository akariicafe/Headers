@interface ZoomAnimationTestProcessor : ContentInteractionTestRunner

@property (nonatomic) int iterationsRemaining;
@property (nonatomic) long long testState;
@property (nonatomic) int targetIndex;
@property (nonatomic) double initialZoom;

- (void)dealloc;
- (void)resetZoom;
- (void)advanceTest;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (BOOL)performActionForPage:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0;
- (BOOL)startPageAction:(id)a0;
- (void)startZoom;

@end
