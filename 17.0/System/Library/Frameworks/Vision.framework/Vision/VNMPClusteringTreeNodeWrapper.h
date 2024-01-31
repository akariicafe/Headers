@interface VNMPClusteringTreeNodeWrapper : NSObject

@property void *node;
@property BOOL freeNodeOnDealloc;

- (id)left;
- (void)dealloc;
- (id)right;
- (float)distance;
- (id)descriptor;
- (id)initWithNode:(void *)a0 freeNodeOnDealloc:(BOOL)a1;
- (float)avgDistance;
- (id)getLeafNodes;
- (int)leafsCount;
- (int)nodeId;

@end
