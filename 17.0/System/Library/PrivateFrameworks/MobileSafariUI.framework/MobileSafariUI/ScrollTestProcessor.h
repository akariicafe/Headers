@interface ScrollTestProcessor : ContentInteractionTestRunner

@property (nonatomic) BOOL startedScrollTest;
@property (nonatomic) int scrollDelta;

- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (BOOL)performActionForPage:(id)a0;
- (BOOL)startPageAction:(id)a0;

@end
