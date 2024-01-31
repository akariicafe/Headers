@class NSArray, NSSet;

@interface _IKDOMMutationRuleSet : NSObject

@property (readonly, copy, nonatomic) NSArray *mutationRules;
@property (readonly, copy, nonatomic) NSSet *dependentPathStrings;

- (void).cxx_destruct;
- (id)initWithMutationRules:(id)a0;

@end
