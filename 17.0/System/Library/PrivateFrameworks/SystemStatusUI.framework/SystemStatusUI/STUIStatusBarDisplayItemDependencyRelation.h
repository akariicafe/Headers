@class STUIStatusBarDisplayItemPlacement, STUIStatusBarDisplayItemState;

@interface STUIStatusBarDisplayItemDependencyRelation : STUIStatusBarDisplayItemRelation

@property (weak, nonatomic) STUIStatusBarDisplayItemState *itemState;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *placement;
@property (nonatomic) BOOL requirement;

- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (void).cxx_destruct;
- (id)itemStates;
- (BOOL)isFulfilled;
- (id)type;

@end
