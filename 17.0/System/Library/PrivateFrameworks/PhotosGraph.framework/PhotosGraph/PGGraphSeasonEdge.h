@interface PGGraphSeasonEdge : PGGraphPropertylessEdge

+ (id)filter;

- (id)label;
- (unsigned short)domain;
- (id)initFromDateNode:(id)a0 toSeasonNode:(id)a1;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
