@class NSArray;

@interface SBInvalidateSnapshotCacheSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSArray *displayItems;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithDisplayItems:(id)a0;

@end
