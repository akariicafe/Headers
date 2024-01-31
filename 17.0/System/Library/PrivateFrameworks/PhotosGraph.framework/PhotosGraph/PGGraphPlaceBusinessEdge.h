@interface PGGraphPlaceBusinessEdge : PGGraphBusinessEdge

+ (id)filter;

- (id)label;
- (unsigned short)domain;
- (id)initFromMomentNode:(id)a0 toBusinessNode:(id)a1 confidence:(double)a2 hasRoutineInfo:(BOOL)a3 universalStartDate:(id)a4 universalEndDate:(id)a5;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
