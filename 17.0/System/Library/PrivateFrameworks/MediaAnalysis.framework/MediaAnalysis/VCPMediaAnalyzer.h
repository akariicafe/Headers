@class NSMutableDictionary, NSXPCConnection, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface VCPMediaAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_analysisQueue;
    NSObject<OS_dispatch_queue> *_storageQueue;
    NSObject<OS_dispatch_group> *_storageGroup;
    NSNumber *_standalone;
    NSNumber *_minHighlightDuration;
    NSNumber *_noResultStrip;
    NSXPCConnection *_connection;
    NSXPCConnection *_mediaAnalysisServiceConnection;
    NSObject<OS_dispatch_queue> *_sandboxQueue;
    NSMutableDictionary *_sandboxHandles;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _nextRequestID;
    NSObject<OS_dispatch_queue> *_cancelQueue;
    NSMutableDictionary *_cancelTokens;
}

+ (id)sharedMediaAnalyzer;
+ (id)classifyFaceObservation:(id)a0 withPersonsModel:(id)a1 error:(id *)a2;
+ (unsigned long long)faceprintRevisionForPersonModel:(id)a0;
+ (id)loadPersonModelAtPath:(id)a0 error:(id *)a1;
+ (id)personModelFilepathForPhotoLibrary:(id)a0;
+ (Class)_getDistanceDescriptorClass;
+ (BOOL)includeTorsoOnlyForOneUP;

- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)cancelAnalysisWithRequestID:(int)a0;
- (int)findTimeRangesFor:(id)a0 inAsset:(id)a1 withOptions:(id)a2 andProgressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)findTimeRangesWithContext:(id)a0 inAsset:(id)a1 withOptions:(id)a2 andProgressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })postProcessMovieHighlightDuration:(id)a0 withOptions:(id)a1;
- (int)requestAnalysis:(unsigned long long)a0 forAssets:(id)a1 withOptions:(id)a2 andProgressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (id)getTimeRangeResultsForURLAsset:(id)a0;
- (id)postProcessTimeRanges:(id)a0 mergeGap:(id)a1;
- (void)completeStorage;
- (id)_addClassificationResults:(id)a0 analysis:(id)a1;
- (id)_analyzeOndemand:(id)a0 forAnalysisTypes:(unsigned long long)a1 withExistingAnalysis:(id)a2 andOptions:(id)a3 storeAnalysis:(BOOL)a4 cancelBlock:(id /* block */)a5;
- (void)_checkDuplicate:(id)a0 withAsset:(id)a1 duplicate:(long long *)a2;
- (id)_databaseForPhotoLibrary:(id)a0;
- (long long)_getDatabaseSandboxExtensionForPhotoLibraryURL:(id)a0;
- (long long)_getSandboxExtensionForMediaAnalysisDatabaseWithPhotoLibraryURL:(id)a0;
- (void)_getSceneDescriptors:(id)a0 asDescriptorClass:(Class)a1 withSceneRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 andAnalysisResults:(id)a3;
- (unsigned long long)_metaAnalysisTypesForAsset:(id)a0;
- (id)_postProcessMovieHighlights:(id)a0 analysis:(id)a1 withOptions:(id)a2;
- (id)_queryDistanceDescriptor:(Class)a0 ofAsset:(id)a1 withExistingAnalysis:(id)a2 andDatabase:(id)a3 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 lastFeature:(BOOL)a5 isDegraded:(BOOL *)a6;
- (id)_requestAnalysis:(unsigned long long)a0 forAsset:(id)a1 withExistingAnalysis:(id)a2 andDatabase:(id)a3 andOptions:(id)a4 cancelBlock:(id /* block */)a5;
- (void)_setupMediaAnalysisServiceConnection;
- (unsigned long long)_typesToRemove:(unsigned long long)a0 requested:(unsigned long long)a1;
- (id)analyzeOndemand:(id)a0 pairedURL:(id)a1 forAnalysisTypes:(unsigned long long)a2 error:(id *)a3;
- (void)assetsAnalyzedSinceDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)assetsFromPhotoLibrary:(id)a0 analyzedSinceDate:(id)a1 completionHandler:(id /* block */)a2;
- (id)curateMovieAssetsForCollection:(id)a0 withAlreadyCuratedAssets:(id)a1 andDesiredCount:(unsigned long long)a2 allowOnDemand:(BOOL)a3;
- (void)distanceFromAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 toAsset:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 duplicate:(long long *)a4 distance:(float *)a5;
- (void)distanceFromAsset:(id)a0 toAsset:(id)a1 duplicate:(long long *)a2 distance:(float *)a3;
- (int)findTimeRangesFor:(id)a0 inURLAsset:(id)a1 withOptions:(id)a2 andProgressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)findTimeRangesWithContext:(id)a0 inURLAsset:(id)a1 withOptions:(id)a2 andProgressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (id)getTimeRangesForActionIDs:(id)a0 withResults:(id)a1;
- (id)getTimeRangesForSceneIdentifiers:(id)a0 withResults:(id)a1;
- (id)getTimeRangesForSoundIdentifiers:(id)a0 withResults:(id)a1;
- (id)getTimeRangesInAsset:(id)a0 forFaces:(id)a1 withAnalysis:(id)a2;
- (id)getTimeRangesInAsset:(id)a0 forPersonLocalIdentifiers:(id)a1 withAnalysis:(id)a2;
- (int)requestAnalysesForAssets:(id)a0 analysisTypes:(unsigned long long)a1 allowOndemand:(BOOL)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)requestAnalysis:(unsigned long long)a0 forAssets:(id)a1 withOptions:(id)a2 andProgressHandler:(id /* block */)a3 andError:(id *)a4;
- (int)requestAnalysisForAsset:(id)a0 analysisTypes:(unsigned long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)requestAnalysisTypes:(unsigned long long)a0 forAssetWithResourceURLs:(id)a1 withOptions:(id)a2 error:(id *)a3;
- (id)requestAnalysisTypes:(unsigned long long)a0 forAssets:(id)a1 allowOndemand:(BOOL)a2 progressHandler:(id /* block */)a3 error:(id *)a4;
- (int)requestAnalysisTypes:(unsigned long long)a0 forAssets:(id)a1 withOptions:(id)a2 andProgressHandler:(id /* block */)a3 cancelBlock:(id /* block */)a4 analyses:(id)a5;
- (id)requestLivePhotoEffectsForAssets:(id)a0 allowOnDemand:(BOOL)a1 flags:(unsigned long long)a2;
- (id)requestMovieHighlightsForAssets:(id)a0 withOptions:(id)a1;

@end
