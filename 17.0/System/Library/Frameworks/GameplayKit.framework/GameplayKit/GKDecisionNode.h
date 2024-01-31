@class GKDecisionTree;

@interface GKDecisionNode : NSObject {
    void *_node;
    GKDecisionTree *_tree;
}

- (id)attribute;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)setAttribute:(id)a0;
- (id)branches;
- (id)createBranchWithPredicate:(id)a0 attribute:(id)a1;
- (id)createBranchWithValue:(id)a0 attribute:(id)a1;
- (id)createBranchWithWeight:(long long)a0 attribute:(id)a1;
- (id)createChildWithAttribute:(id)a0 randomSource:(id)a1 withBranch:(id)a2;
- (id)getNodeAtBranch:(id)a0;
- (id)initWithNode:(void *)a0 tree:(id)a1;

@end
