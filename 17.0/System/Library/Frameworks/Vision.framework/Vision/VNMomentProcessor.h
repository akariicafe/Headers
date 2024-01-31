@class VNMPContext;

@interface VNMomentProcessor : NSObject

@property (retain, nonatomic) VNMPContext *context;

+ (id)sortImageDescriptorsChronologically:(id)a0;

- (void).cxx_destruct;
- (id)computeClusteringForClusteringTree:(id)a0 intoKGroups:(int)a1 error:(id *)a2;
- (id)computeClusteringForClusteringTree:(id)a0 usingThreshold:(float)a1 error:(id *)a2;
- (id)computeClusteringOfImageDescriptors:(id)a0 intoKGroups:(int)a1 error:(id *)a2;
- (id)computeClusteringTreeForImageDescriptors:(id)a0 assumeDescriptorsAreSorted:(BOOL)a1 error:(id *)a2;
- (id)computeClusteringTreeForImageDescriptors:(id)a0 error:(id *)a1;
- (id)computeNaturalClusteringForClusteringTree:(id)a0 error:(id *)a1;
- (id)computeNaturalClusteringOfImageDescriptors:(id)a0 error:(id *)a1;
- (id)convertClusterNodesListToDescriptorsList:(struct vector<MPClusteringTreeNode *, std::allocator<MPClusteringTreeNode *>> { struct MPClusteringTreeNode **x0; struct MPClusteringTreeNode **x1; struct __compressed_pair<MPClusteringTreeNode **, std::allocator<MPClusteringTreeNode *>> { struct MPClusteringTreeNode **x0; } x2; })a0;
- (id)getKey:(id)a0 fromDictionary:(id)a1 withDefault:(id)a2;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)performClustersPostprocessing:(id)a0 error:(id *)a1;

@end
