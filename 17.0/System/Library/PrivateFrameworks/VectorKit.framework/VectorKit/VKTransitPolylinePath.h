@interface VKTransitPolylinePath : VKPolylinePath {
    unsigned long long _lineID;
}

@property (readonly, nonatomic) double vertexEqualityTolerance;

- (id)description;
- (id)initWithOverlay:(id)a0 section:(id)a1 points:(void *)a2 pointCount:(unsigned long long)a3 reversePoints:(BOOL)a4 transform:(void *)a5 routeStartIndex:(unsigned int)a6 routeEndIndex:(unsigned int)a7 lineID:(unsigned long long)a8;
- (id)initWithOverlay:(id)a0 section:(id)a1 points:(void *)a2 pointCount:(unsigned long long)a3 reversePoints:(BOOL)a4 transform:(void *)a5 routeStartIndex:(unsigned int)a6 routeEndIndex:(unsigned int)a7 lineID:(unsigned long long)a8 tileZ:(unsigned int)a9 vertexPrecision:(unsigned char)a10;

@end
