@interface PGEventLabelingFeaturesFileCache : NSObject {
    void /* unknown type, empty encoding */ delimiterByte;
    void /* unknown type, empty encoding */ cacheFile;
    void /* unknown type, empty encoding */ cacheFileURL;
    void /* unknown type, empty encoding */ featureExtractorsForCaching;
}

+ (id)cacheForMomentGraphRebuildWithGraphServiceURL:(id)a0 graph:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)clearCacheWithError:(id *)a0;
- (BOOL)isCacheEmptyAtGraphServiceURL:(id)a0;
- (BOOL)writeFeaturesForMomentNode:(id)a0 assetFetchResult:(id)a1 photoLibrary:(id)a2 progressReporter:(id)a3 error:(id *)a4;

@end
