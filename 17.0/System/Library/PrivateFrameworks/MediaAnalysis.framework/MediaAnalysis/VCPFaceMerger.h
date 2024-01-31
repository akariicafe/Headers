@interface VCPFaceMerger : NSObject {
    double _mergeDistanceThreshold;
}

+ (BOOL)_allowANE;

- (id)_alignFaceObservations:(id)a0 withRequestHandler:(id)a1 error:(id *)a2;
- (void)_alignBoundingBoxOfFaces:(id)a0 withRequestHandler:(id)a1 orientedWidth:(unsigned long long)a2 orientedHeight:(unsigned long long)a3;
- (id)_sortedViableFaceMergePairsFromQueryFaces:(id)a0 andCandidateFaces:(id)a1;
- (id)initWithThreshold:(double)a0;
- (id)_faceObservationsWithBoundingBoxFromFaces:(id)a0 withFaceHashMapping:(id)a1;
- (id)mergeExistingFaces:(id)a0 andDetectedFaces:(id)a1 withRequestHandler:(id)a2 orientedWidth:(unsigned long long)a3 orientedHeight:(unsigned long long)a4 assetWidth:(unsigned long long)a5 assetHeight:(unsigned long long)a6;

@end
