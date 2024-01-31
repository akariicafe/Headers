@class PGGraphPersonNode, PGGraphSocialGroupNode;

@interface PGGraphBelongsToEdge : PGGraphOptimizedEdge

@property (readonly) double importance;
@property (readonly) PGGraphPersonNode *personNode;
@property (readonly) PGGraphSocialGroupNode *socialGroupNode;

+ (id)filter;
+ (void)setImportance:(double)a0 onBelongsToEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;

- (id)label;
- (id)propertyDictionary;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromPersonNode:(id)a0 toSocialGroupNode:(id)a1 importance:(double)a2;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
