@interface PXStoryResourcesPreloadingStatsStore : NSObject {
    struct { long long preloadableClipsCount; long long preloadedClipsCount; double accumulatedClipsLoadingTime; long long accumulatedClipsLoadedCount; } _imageClipsStats;
    struct { long long preloadableClipsCount; long long preloadedClipsCount; double accumulatedClipsLoadingTime; long long accumulatedClipsLoadedCount; } _livePhotoClipsStats;
    struct { long long preloadableClipsCount; long long preloadedClipsCount; double accumulatedClipsLoadingTime; long long accumulatedClipsLoadedCount; } _videoClipsStats;
}

@property (readonly, nonatomic) float loadedFraction;
@property (readonly, nonatomic) double estimatedLoadingTimeLeft;
@property (readonly, nonatomic) BOOL didDownloadFirstVideo;

- (void)_enumerateAllStats:(id /* block */)a0;
- (void)_modifyStatsForPlaybackStyle:(long long)a0 withModifier:(id /* block */)a1;
- (void)noteClipWithPlaybackStyle:(long long)a0 loadedWithLoadingTime:(double)a1;
- (void)noteSessionStartedPreloadableClipsCounts:(struct { long long x0; long long x1; long long x2; })a0;

@end
