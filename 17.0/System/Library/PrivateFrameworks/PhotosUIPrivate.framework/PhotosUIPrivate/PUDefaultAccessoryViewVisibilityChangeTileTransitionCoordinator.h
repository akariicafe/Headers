@class PUBrowsingViewModel;

@interface PUDefaultAccessoryViewVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (nonatomic) BOOL shouldAnimateContent;
@property (nonatomic) BOOL shouldAnimateAccessory;
@property (nonatomic) BOOL shouldSlideAccessory;

- (void).cxx_destruct;
- (id)_layoutInfoWithDefaultDisappearance:(id)a0;
- (id)optionsForAnimatingTileController:(id)a0 toLayoutInfo:(id)a1 withAnimationType:(long long)a2;

@end
