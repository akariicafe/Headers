@class NSDictionary;
@protocol KGEdge;

@interface KGEdgeChangeRequest : NSObject

@property (readonly, nonatomic) id<KGEdge> edge;
@property (readonly, nonatomic) NSDictionary *properties;

- (void).cxx_destruct;
- (id)initWithEdge:(id)a0 properties:(id)a1;

@end
