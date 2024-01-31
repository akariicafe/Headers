@class STUIStatusBarDisplayItemPlacement, NSMutableArray, STUIStatusBarRegion;

@interface STUIStatusBarDisplayItemPlacementState : NSObject <STUIStatusBarPrioritized>

@property (retain, nonatomic) NSMutableArray *relations;
@property (readonly, nonatomic) STUIStatusBarDisplayItemPlacement *placement;
@property (readonly, weak, nonatomic) STUIStatusBarRegion *region;
@property (readonly, nonatomic, getter=areRelationsFulfilled) BOOL relationsFulfilled;
@property (readonly, nonatomic) BOOL canBeEnabled;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long priority;

+ (id)stateForDisplayItemPlacement:(id)a0 region:(id)a1;

- (id)succinctDescriptionBuilder;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
