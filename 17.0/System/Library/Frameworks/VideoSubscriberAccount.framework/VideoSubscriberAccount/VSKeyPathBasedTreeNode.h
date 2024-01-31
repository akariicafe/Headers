@class NSString;

@interface VSKeyPathBasedTreeNode : VSTreeNode

@property (readonly, copy, nonatomic) NSString *keyPath;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRepresentedObject:(id)a0;
- (id)initWithRepresentedObject:(id)a0 keyPath:(id)a1;

@end
