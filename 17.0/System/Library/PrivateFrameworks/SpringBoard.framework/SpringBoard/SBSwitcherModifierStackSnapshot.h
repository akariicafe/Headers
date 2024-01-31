@class NSString, SBSwitcherModifierQuerySnapshot, NSArray;

@interface SBSwitcherModifierStackSnapshot : NSObject

@property (readonly, copy, nonatomic) NSString *modifierName;
@property (readonly, copy, nonatomic) NSString *modifierDescription;
@property (readonly, copy, nonatomic) SBSwitcherModifierQuerySnapshot *querySnapshot;
@property (readonly, copy, nonatomic) NSArray *childSnapshots;

- (void).cxx_destruct;
- (void)_enumerateModifierSnapshots:(id /* block */)a0 stop:(BOOL *)a1;
- (unsigned long long)countOfAllChildSnapshots;
- (void)enumerateModifierSnapshots:(id /* block */)a0;
- (id)initWithRootModifier:(id)a0;

@end
