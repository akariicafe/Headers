@class AVAsset;

@interface JFXMovieCompositionItem : JFXCompositionItem

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAsset *audioAssetOverwrite;
@property (nonatomic) int audioAssetOverwriteStartOffset;

- (void).cxx_destruct;
- (BOOL)hasVideoContent;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })applySpeed:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)audioTrackSegmentsLoopedWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 paddedFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithClip:(id)a0 timeScale:(int)a1;
- (BOOL)needAudioLoop;
- (id)segmentWithCharacteristic:(id)a0 sourceRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 destinationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)speedRangesForSourceRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 destinationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)videoTrackSegmentsWithDestinationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end
