@class ATXApp2VecMapping;

@interface ATXApp2VecClustering : NSObject {
    ATXApp2VecMapping *_clusterCentroids;
    ATXApp2VecMapping *_appEmbeddings;
    long long _vectorLength;
    BOOL _loaded;
}

+ (id)sharedInstance;
+ (void)resetSharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_getClosestClusterCentroidForVector:(const float *)a0;
- (float)_getL2DistanceFrom:(const float *)a0 to:(float *)a1;
- (id)_mergeClusterCentroids:(id)a0 forBundleIds:(id)a1;
- (id)getClosestClusterCentroidForBundleId:(id)a0;
- (id)getClusterCentroidsForBundleIds:(id)a0;

@end
