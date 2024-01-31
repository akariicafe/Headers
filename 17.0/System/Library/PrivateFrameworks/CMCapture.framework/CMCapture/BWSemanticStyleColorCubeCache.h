@class NSMutableArray, BWColorLookupCache, NSMutableDictionary;

@interface BWSemanticStyleColorCubeCache : NSObject {
    BWColorLookupCache *_colorLookupCache;
    NSMutableDictionary *_cubeFilterCache;
    NSMutableArray *_recentFilterCacheKeys;
    BOOL _cachingEnabled;
    unsigned long long _cacheMaxSize;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _filterCacheLock;
}

+ (void)initialize;

- (void)dealloc;
- (id)filtersForSemanticStyle:(id)a0 sceneType:(int)a1 personSegmentationEnabled:(BOOL)a2 maskVisualizationEnabled:(BOOL)a3 filtersToCombine:(id)a4;
- (id)initWithColorLookupCache:(id)a0;

@end
