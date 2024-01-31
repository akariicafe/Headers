@protocol PUTilingViewControllerTransition;

@interface PUTileAnimator : NSObject

@property (readonly, weak, nonatomic) id<PUTilingViewControllerTransition> currentTransition;

- (id)freezeTileController:(id)a0;
- (void).cxx_destruct;
- (void)animateTileController:(id)a0 toLayoutInfo:(id)a1 withOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)prepareTileControllerForAnimation:(id)a0 withInitialLayoutInfo:(id)a1;
- (void)transition:(id)a0 didComplete:(BOOL)a1;
- (void)transitionDidBeginAnimation:(id)a0;
- (void)transitionWillBeginAnimation:(id)a0;
- (void)updateAnimationForTileController:(id)a0 withRepositionedTargetLayoutInfo:(id)a1;

@end
