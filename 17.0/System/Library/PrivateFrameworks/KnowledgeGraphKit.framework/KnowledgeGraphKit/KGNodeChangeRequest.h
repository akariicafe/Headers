@class NSDictionary;
@protocol KGNode;

@interface KGNodeChangeRequest : NSObject

@property (readonly, nonatomic) id<KGNode> node;
@property (readonly, nonatomic) NSDictionary *properties;

- (void).cxx_destruct;
- (id)initWithNode:(id)a0 properties:(id)a1;

@end
