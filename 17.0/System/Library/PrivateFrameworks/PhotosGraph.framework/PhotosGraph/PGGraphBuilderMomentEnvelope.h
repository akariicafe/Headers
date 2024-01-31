@class NSArray, PGGraphMomentNode;

@interface PGGraphBuilderMomentEnvelope : NSObject

@property (readonly) PGGraphMomentNode *momentNode;
@property (retain, nonatomic) NSArray *sceneEdges;

- (void).cxx_destruct;
- (id)initWithMomentNode:(id)a0;

@end
