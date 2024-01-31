@class PHAsset;

@interface _PXStoryExport_VideoHighlightInfo : NSObject

@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } loadingVideoTimeRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } loadedVideoPlaybackStartTime;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } storyPlaybackRange;
@property (nonatomic) struct { long long mode; long long modeBasis; float volume; double JCutLength; double LCutLength; double fadeIn; double fadeOut; } audioInfo;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 loadingVideoTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 loadedVideoPlaybackStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 storyPlaybackRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 audioInfo:(struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; })a4;

@end
