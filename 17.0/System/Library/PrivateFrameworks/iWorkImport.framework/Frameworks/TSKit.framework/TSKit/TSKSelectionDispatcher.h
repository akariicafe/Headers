@protocol TSKSelectionDispatchReceiver;

@interface TSKSelectionDispatcher : NSObject

@property (weak, nonatomic) id<TSKSelectionDispatchReceiver> selectionDispatchReceiver;

- (void).cxx_destruct;
- (void)beginTransformingCurrentSelectionPaths;
- (void)dispatchSelectionPath:(id)a0 withFlags:(unsigned long long)a1;
- (void)endTransformingCurrentSelectionPaths;
- (id)newRootSelectionTransformerForSelectionPath:(id)a0;
- (void)transformCurrentSelectionPathsUsingOperationTransformer:(id)a0;

@end
