@class GEOMapFeatureMultiSegmentRoadFinder;

@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder {
    GEOMapFeatureMultiSegmentRoadFinder *_multiSegmentRoadFinder;
}

- (void).cxx_destruct;
- (id)findRoadWithID:(unsigned long long)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findRoadWithMuid:(unsigned long long)a0 nearCoordinate:(struct { double x0; double x1; })a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findRoadsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)_findUnjoinedRoadsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2;
- (id)_findUnjoinedRoadsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)_multiSegmentRoadFinder;

@end
