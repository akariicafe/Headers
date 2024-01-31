@class NSMutableArray, PHASEStringMetaParameterDefinition;

@interface PHASESwitchNodeDefinition : PHASESoundEventNodeDefinition

@property (retain, nonatomic) NSMutableArray *subtrees;
@property (readonly, nonatomic) PHASEStringMetaParameterDefinition *switchMetaParameterDefinition;

+ (id)new;

- (id)children;
- (id)init;
- (void).cxx_destruct;
- (void)addSubtree:(id)a0 switchValue:(id)a1;
- (id)initWithSwitchMetaParameterDefinition:(id)a0;
- (id)initWithSwitchMetaParameterDefinition:(id)a0 identifier:(id)a1;
- (id)initWithSwitchMetaParameterDefinition:(id)a0 uid:(id)a1;

@end
