@protocol JFXPlayableElement;

@interface JFXCompositionItem : NSObject

@property (retain, nonatomic) id<JFXPlayableElement> clip;
@property (nonatomic) BOOL isFinalClip;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } sourceTimeRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } destinationDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } audioStartOffset;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } audioEndOffset;
@property (readonly, nonatomic) BOOL hasVideoContent;
@property (readonly, nonatomic) BOOL isFreezeFrame;
@property (nonatomic) float speed;
@property (readonly, nonatomic) BOOL isWaitingForResource;
@property (readonly, nonatomic) BOOL needSilenceAtEnd;
@property (readonly, nonatomic) BOOL needAudioLoop;
@property (nonatomic) int timeScale;

+ (id)compositionItemWithClip:(id)a0 timeScale:(int)a1;
+ (void)mediaserverdCrashed;
+ (id)silenceAsset;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)audioTrackSegmentsLoopedWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 paddedFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)emptyTrackSegmentWithDestinationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)emptyTrackSegmentWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithClip:(id)a0 timeScale:(int)a1;
- (id)videoTrackSegmentsWithDestinationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end
