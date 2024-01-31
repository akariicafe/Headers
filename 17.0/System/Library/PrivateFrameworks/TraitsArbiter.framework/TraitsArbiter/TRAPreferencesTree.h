@class NSString, NSArray;

@interface TRAPreferencesTree : NSObject <TRAPreferencesTree, BSDescriptionProviding> {
    NSArray *_rootChildren;
}

@property (nonatomic) BOOL isFlatTree;
@property (nonatomic) long long traversalType;
@property (readonly, nonatomic) NSString *debugName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)treeWithNodesSpecifications:(id)a0 traversalType:(long long)a1 debugName:(id)a2;

- (id)recursiveDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)topologicalSort;
- (id)participantsTopologicalSort;
- (id)_initWithRootChildren:(id)a0 traversalType:(long long)a1 debugName:(id)a2;
- (id)_recursiveDescriptionWithChildrenInZOrder:(BOOL)a0;

@end
