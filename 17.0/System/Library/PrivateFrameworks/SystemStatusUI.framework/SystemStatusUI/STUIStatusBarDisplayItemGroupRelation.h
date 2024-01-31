@class NSArray;

@interface STUIStatusBarDisplayItemGroupRelation : STUIStatusBarDisplayItemRelation

@property (retain, nonatomic) NSArray *relations;
@property (nonatomic) BOOL requiresAll;

- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (void).cxx_destruct;
- (id)itemStates;
- (BOOL)isFulfilled;
- (id)type;

@end
