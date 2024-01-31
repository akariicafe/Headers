@class COClusterAliasManager;

@interface _COClusterAliasManagerStateTrackingAddOn : COMeshAddOn

@property (weak, nonatomic) COClusterAliasManager *aliasManager;

- (void).cxx_destruct;
- (void)didStopMeshController:(id)a0;

@end
