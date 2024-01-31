@interface GEOMapFeatureTransitPointFinder : GEOMapFeatureAccessFinder

- (id)findTransitAccessPointsForStation:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)_geometryTileFinder;
- (id)_tileFinder;
- (id)_transitPointForFeature:(void *)a0;
- (id)findGeometryForTransitPoint:(id)a0 completionHandler:(id /* block */)a1;
- (id)findParentOfTransitPoint:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findTransitPointWithID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitPointsOfType:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 radius:(double)a2 handler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)findTransitPointsWithParent:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
