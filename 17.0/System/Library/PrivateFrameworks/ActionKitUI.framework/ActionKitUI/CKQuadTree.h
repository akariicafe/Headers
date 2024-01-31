@class CKQuadTreeNode;

@interface CKQuadTree : NSObject

@property (readonly, nonatomic) CKQuadTreeNode *rootNode;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPoints:(id)a0;
- (void)visit:(id /* block */)a0;

@end
