@class PUTileReattachmentContext;

@interface PUDefaultReattachedTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

@property (retain, nonatomic) PUTileReattachmentContext *context;

- (void).cxx_destruct;
- (id)optionsForAnimatingTileController:(id)a0 toLayoutInfo:(id)a1 withAnimationType:(long long)a2;

@end
