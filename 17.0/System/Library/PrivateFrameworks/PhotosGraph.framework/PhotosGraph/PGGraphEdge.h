@class MAEdgeFilter, NSString;

@interface PGGraphEdge : MAEdge <PGGraphElement>

@property (class, readonly, nonatomic) MAEdgeFilter *filter;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWeight:(float)a0;
- (float)weight;
- (id)propertyForKey:(id)a0;
- (unsigned long long)propertiesCount;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initWithSourceNode:(id)a0 targetNode:(id)a1;
- (BOOL)isEqualToEdge:(id)a0;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)keywordDescription;

@end
