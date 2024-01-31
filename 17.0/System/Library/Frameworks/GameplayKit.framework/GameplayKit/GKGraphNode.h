@class NSArray, NSMutableArray;

@interface GKGraphNode : NSObject <NSSecureCoding> {
    NSMutableArray *_connectedNodes;
    void *_cGraphNode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *connectedNodes;

+ (id)node;

- (void)removeConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)findPathToNode:(id)a0;
- (void)addConnection:(id)a0 bidirectional:(BOOL)a1;
- (void)addConnectionsToNodes:(id)a0 bidirectional:(BOOL)a1;
- (void *)cGraphNode;
- (float)costToNode:(id)a0;
- (void)deleteCGraphNode;
- (float)estimatedCostToNode:(id)a0;
- (id)findPathFromNode:(id)a0;
- (void *)makeCGraphNode;
- (id)mutConnectedNodes;
- (void)removeConnectionsToNodes:(id)a0 bidirectional:(BOOL)a1;

@end
