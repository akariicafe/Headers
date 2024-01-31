@interface GEOMapFeatureBuildingFinder : GEOMapFeatureAccessFinder

- (id)findBuildingsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findBuildingsNear:(struct { double x0; double x1; })a0 radius:(double)a1 tileSetStyle:(int)a2 handler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (struct vector<GeoCodecsVectorTilePoint, std::allocator<GeoCodecsVectorTilePoint>> { struct GeoCodecsVectorTilePoint *x0; struct GeoCodecsVectorTilePoint *x1; struct __compressed_pair<GeoCodecsVectorTilePoint *, std::allocator<GeoCodecsVectorTilePoint>> { struct GeoCodecsVectorTilePoint *x0; } x2; })_verticesFromTile:(id)a0 forBuildingIndex:(unsigned int)a1;

@end
