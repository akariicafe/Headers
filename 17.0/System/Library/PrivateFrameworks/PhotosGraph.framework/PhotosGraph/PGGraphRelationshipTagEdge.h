@class PGGraphPersonNode, PGGraphPersonRelationshipTagNode;

@interface PGGraphRelationshipTagEdge : PGGraphOptimizedEdge

@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) PGGraphPersonNode *personNode;
@property (readonly, nonatomic) PGGraphPersonRelationshipTagNode *tagNode;

+ (id)filter;
+ (id)filterWithConfidence:(double)a0;

- (id)label;
- (id)propertyDictionary;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)edgeDescription;
- (id)initFromPersonNode:(id)a0 toRelationshipTagNode:(id)a1 withConfidence:(double)a2;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
