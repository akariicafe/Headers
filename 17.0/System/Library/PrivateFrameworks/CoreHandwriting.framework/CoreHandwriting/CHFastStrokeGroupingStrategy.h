@class NSArray, CHStrokeClutterFilter;

@interface CHFastStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    NSArray *_locales;
    CHStrokeClutterFilter *_clutterFilter;
}

- (void).cxx_destruct;
- (struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *x0; } x2; })clustersForStrokes:(id)a0 shouldMakeSingleCluster:(BOOL)a1;
- (id)fastGroupingResultWithFastGroupingClusters:(void *)a0 clusteredStrokes:(id)a1;
- (id)groupingResultForContextStrokes:(id)a0 clusteredStrokes:(id)a1 fastGroupingResult:(id)a2 point:(struct CGPoint { double x0; double x1; })a3 tokenizationLevel:(long long)a4;
- (id)groupingResultUsingStrokes:(id)a0 distanceMetric:(int)a1 mergingDistanceThreshold:(double)a2 shouldCancel:(id /* block */)a3;
- (id)initWithStrokeProvider:(id)a0 locales:(id)a1 clutterFilter:(id)a2;
- (id)lineGroupingResultUsingStrokes:(id)a0 shouldCancel:(id /* block */)a1;
- (id)strategyIdentifier;

@end
