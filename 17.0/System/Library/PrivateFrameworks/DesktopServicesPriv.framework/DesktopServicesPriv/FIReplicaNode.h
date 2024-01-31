@class FIDSNode;

@interface FIReplicaNode : FINode {
    FIDSNode *_node;
}

- (id)init:(id)a0;
- (void)dealloc;
- (id)description;
- (id)original;
- (void).cxx_destruct;
- (void *)asTNode;

@end
