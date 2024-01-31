@interface RotationTestProcessor : ContentInteractionTestRunner

@property (nonatomic) int iterationsRemaining;
@property (nonatomic) long long testState;

- (void)startRotation;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (BOOL)performActionForPage:(id)a0;
- (BOOL)startPageAction:(id)a0;

@end
