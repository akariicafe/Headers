@class MAGraphSpecification;

@interface MAKGEntityFactory : NSObject <KGEntityFactory>

@property (readonly, nonatomic) MAGraphSpecification *specification;

- (id)nodeWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2;
- (id)edgeWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (void).cxx_destruct;
- (id)initWithSpecification:(id)a0;

@end
