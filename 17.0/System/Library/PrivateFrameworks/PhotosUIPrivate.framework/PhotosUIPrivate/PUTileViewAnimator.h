@class NSMapTable;

@interface PUTileViewAnimator : PUTileAnimator

@property (readonly, nonatomic) NSMapTable *_synchronizedAnimationGroupsByTransition;

- (id)init;
- (void).cxx_destruct;
- (void)animateTileController:(id)a0 toLayoutInfo:(id)a1 withOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)_performAnimations:(id /* block */)a0 withOptions:(id)a1;
- (void)prepareTileControllerForAnimation:(id)a0 withInitialLayoutInfo:(id)a1;
- (void)transition:(id)a0 didComplete:(BOOL)a1;
- (void)updateAnimationForTileController:(id)a0 withRepositionedTargetLayoutInfo:(id)a1;

@end
