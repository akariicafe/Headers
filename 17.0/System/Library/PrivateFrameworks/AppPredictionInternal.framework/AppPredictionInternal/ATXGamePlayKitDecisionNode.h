@class ATXGamePlayKitDecisionTree;

@interface ATXGamePlayKitDecisionNode : NSObject {
    struct shared_ptr<ATXGamePlayKitCDecisionNode> { struct ATXGamePlayKitCDecisionNode *__ptr_; struct __shared_weak_count *__cntrl_; } _node;
    ATXGamePlayKitDecisionTree *_tree;
}

- (id)attribute;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)setAttribute:(id)a0;
- (id)branches;
- (id)createBranchWithPredicate:(id)a0 attribute:(id)a1;
- (id)createBranchWithValue:(id)a0 attribute:(id)a1;
- (id)createBranchWithWeight:(long long)a0 attribute:(id)a1;
- (id)createChildWithAttribute:(id)a0 randomSource:(id)a1 withBranch:(id)a2;
- (id)getNodeAtBranch:(id)a0;
- (id)initWithNode:(struct shared_ptr<ATXGamePlayKitCDecisionNode> { struct ATXGamePlayKitCDecisionNode *x0; struct __shared_weak_count *x1; })a0 tree:(id)a1;

@end
