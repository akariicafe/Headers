@class UIViewController;

@interface PREditorFixedTitleTransition : NSObject <PREditorTitleTransitioning>

@property (retain, nonatomic) UIViewController *sourceTitleViewController;
@property (retain, nonatomic) UIViewController *destinationTitleViewController;

- (void)updateInteractiveTransition:(double)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)animationKey;
- (id)initWithSourceTitleViewController:(id)a0 destinationTitleViewController:(id)a1 anchorView:(id)a2;

@end
