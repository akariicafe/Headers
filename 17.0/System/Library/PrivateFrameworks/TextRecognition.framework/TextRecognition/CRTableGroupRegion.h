@class NSArray;

@interface CRTableGroupRegion : CRGroupRegion

@property (readonly) NSArray *rowQuads;
@property (readonly) NSArray *columnQuads;
@property (readonly) NSArray *cells;

- (void).cxx_destruct;
- (id)initWithBoundingQuad:(id)a0 layoutDirection:(unsigned long long)a1 cells:(id)a2 lineRegions:(id)a3 rowQuads:(id)a4 columnQuads:(id)a5;

@end
