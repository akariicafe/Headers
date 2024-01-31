@class NSArray, VCPDatabaseReader, NSDictionary, PHPhotoLibrary;

@interface VCPFullAnalysisAssetProcessingTask : NSObject <VCPMADTaskProtocol> {
    id /* block */ _completionHandler;
    NSArray *_assets;
    PHPhotoLibrary *_photoLibrary;
    VCPDatabaseReader *_database;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancel;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _started;
    BOOL _allowOnDemand;
    BOOL _allowStreaming;
    unsigned long long _analysisTypes;
    NSDictionary *_options;
}

+ (BOOL)AllowPersistSettlingEffectScore;
+ (id)taskWithAsset:(id)a0 andAnalysisTypes:(unsigned long long)a1 andOptions:(id)a2 andProgressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;

- (int)run;
- (void)dealloc;
- (int)main;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)autoCancellable;
- (id)analyzeOndemand:(id)a0 forAnalysisTypes:(unsigned long long)a1 withExistingAnalysis:(id)a2 error:(id *)a3;
- (id)initWithAssets:(id)a0 analysisTypes:(unsigned long long)a1 options:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (id)requestAnalysis:(unsigned long long)a0 forAsset:(id)a1 andDatabase:(id)a2 error:(id *)a3;
- (float)resourceRequirement;

@end
