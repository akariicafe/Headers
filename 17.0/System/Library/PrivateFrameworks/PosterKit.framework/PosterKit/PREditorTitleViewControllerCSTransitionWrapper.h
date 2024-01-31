@protocol CSProminentDisplayTransitioning;

@interface PREditorTitleViewControllerCSTransitionWrapper : NSObject <PREditorTitleViewControllerTransitioning>

@property (retain, nonatomic) id<CSProminentDisplayTransitioning> csTransitioning;

- (void)updateInteractiveTransition:(double)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void).cxx_destruct;
- (id)initWithCSTransitioning:(id)a0;

@end
