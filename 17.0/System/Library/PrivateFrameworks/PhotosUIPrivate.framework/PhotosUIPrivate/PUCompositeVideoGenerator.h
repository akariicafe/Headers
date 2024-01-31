@class NSObject, NSArray, NSError, AVAssetExportSession, PUMergedLivePhotosVideo;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PUCompositeVideoGenerator : PXObservable {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    long long _stateQueue_state;
    PUMergedLivePhotosVideo *_stateQueue_playbackVideo;
    AVAssetExportSession *_stateQueue_exportSession;
    NSError *_stateQueue_error;
    NSObject<OS_dispatch_group> *_videoAssetsByAssetGroup;
}

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, nonatomic) long long outputType;
@property (readonly, nonatomic) BOOL onlyAllowOverlappingAssets;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) PUMergedLivePhotosVideo *playbackVideo;
@property (readonly, nonatomic) AVAssetExportSession *exportSession;

+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })conformRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 inRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })_overlapDurationBetweenAsset:(id)a0 andAsset:(id)a1;
+ (BOOL)canMergeAsset:(id)a0 withConsecutiveAsset:(id)a1;

- (void)start;
- (id)mutableChangeObject;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)_workQueue_finishWithError:(id)a0;
- (void)_workQueue_finishWithExportSession:(id)a0 error:(id)a1;
- (void)_workQueue_finishWithPlaybackVideo:(id)a0 error:(id)a1;
- (void)_workQueue_generateVideoWithAVAssets:(id)a0;
- (void)_workQueue_generateVideoWithSingleAssetExportSession:(id)a0;
- (void)_workQueue_generateVideoWithSingleAssetPlayerItem:(id)a0;
- (void)_workQueue_start;
- (id)initWithAssets:(id)a0 outputType:(long long)a1 onlyAllowOverlappingAssets:(BOOL)a2;
- (void)setExportSession:(id)a0;
- (void)setPlaybackVideo:(id)a0;

@end
