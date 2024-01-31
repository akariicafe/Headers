@class NTKTaskScheduler, NSMutableDictionary;

@interface NTKPhotoAnalysisFileCache : NSObject {
    NSMutableDictionary *_cache;
    int _sequenceNumber;
    BOOL _cacheDirty;
    NTKTaskScheduler *_taskScheduler;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)_load;
- (BOOL)_save;
- (void).cxx_destruct;
- (void)setPhotoAnalysis:(id)a0 forIdentifier:(id)a1;
- (void)_dirtyCache;
- (id)photoAnalysisForIdentifier:(id)a0;

@end
