@class NSMutableArray;

@interface PHASEContainerNodeDefinition : PHASESoundEventNodeDefinition {
    NSMutableArray *_subtrees;
}

+ (id)new;

- (id)children;
- (id)initWithUID:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addSubtree:(id)a0;

@end
