@class ICCROrderedSet, ICCRTreeNode;

@interface ICCRTree : ICCRObject

@property (readonly, nonatomic) ICCROrderedSet *nodes;
@property (readonly, nonatomic) ICCRTreeNode *root;
@property (readonly, nonatomic) long long count;

+ (id)CRProperties;

- (id)init;
- (void)removeNode:(id)a0;
- (void)setDocument:(id)a0;
- (void)mergeWith:(id)a0;
- (void)computeChildren;
- (id)initWithICCRCoder:(id)a0;
- (unsigned long long)insertIndexForNode:(id)a0 childIndex:(unsigned long long)a1;
- (void)insertNode:(id)a0 inParent:(id)a1 atIndex:(unsigned long long)a2;
- (id)insertNodeWithValue:(id)a0 inParent:(id)a1 atIndex:(unsigned long long)a2;
- (void)invalidateChildren;
- (void)moveNode:(id)a0 toParent:(id)a1 atIndex:(unsigned long long)a2;
- (void)setNodeTree:(id)a0 insertAtIndex:(unsigned long long)a1;

@end
