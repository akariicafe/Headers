@class ODDAlgorithm, ODDPoint, ODDShape, NSMutableArray;

@interface ODILayoutNode : NSObject {
    ODDPoint *mPoint;
    ODDAlgorithm *mAlgorithm;
    ODDShape *mShape;
    NSMutableArray *mChildren;
}

- (void).cxx_destruct;
- (id)initWithLayoutNode:(id)a0 point:(id)a1;
- (id)initWithLayoutNode:(id)a0 state:(struct ODILayoutNodeState { id x0; BOOL x1; } *)a1;
- (void)processAlgorithm:(id)a0 state:(struct ODILayoutNodeState { id x0; BOOL x1; } *)a1;
- (void)processChoose:(id)a0 state:(struct ODILayoutNodeState { id x0; BOOL x1; } *)a1;
- (void)processForEach:(id)a0 state:(struct ODILayoutNodeState { id x0; BOOL x1; } *)a1;
- (void)processLayoutNode:(id)a0 state:(struct ODILayoutNodeState { id x0; BOOL x1; } *)a1;
- (void)processLayoutObjects:(id)a0 state:(struct ODILayoutNodeState { id x0; BOOL x1; } *)a1;
- (void)processShape:(id)a0 state:(struct ODILayoutNodeState { id x0; BOOL x1; } *)a1;

@end
