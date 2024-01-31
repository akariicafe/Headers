@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder {
    struct deque<geo::TransitEdgePiece, std::allocator<geo::TransitEdgePiece>> { struct __split_buffer<geo::TransitEdgePiece *, std::allocator<geo::TransitEdgePiece *>> { struct TransitEdgePiece **__first_; struct TransitEdgePiece **__begin_; struct TransitEdgePiece **__end_; struct __compressed_pair<geo::TransitEdgePiece **, std::allocator<geo::TransitEdgePiece *>> { struct TransitEdgePiece **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<geo::TransitEdgePiece>> { unsigned long long __value_; } __size_; } _pieces;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Matrix<float, 2, 1> { float x0[2]; })_lastPoint;
- (void)_buildCompleteEdge;
- (BOOL)_findEdgeAheadInTile:(id)a0;
- (BOOL)_findEdgeBehindInTile:(id)a0;
- (struct Matrix<float, 2, 1> { float x0[2]; })_firstPoint;
- (id)_firstTile;
- (id)_lastTile;
- (unsigned long long)_maxTileCount;
- (BOOL)_shouldFindEdgeAhead;
- (BOOL)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;
- (id)initWithMap:(id)a0 firstPiece:(const struct TransitEdgePiece { id x0; unsigned long long x1; id x2; unsigned int x3; BOOL x4; } *)a1;

@end
