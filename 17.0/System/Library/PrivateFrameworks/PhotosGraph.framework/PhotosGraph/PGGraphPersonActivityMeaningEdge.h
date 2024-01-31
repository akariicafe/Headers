@interface PGGraphPersonActivityMeaningEdge : PGGraphPropertylessEdge

+ (id)filter;

- (id)label;
- (unsigned short)domain;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toPersonActivityMeaningNode:(id)a1;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)meaningLabel;

@end
