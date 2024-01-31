@class NSArray;
@protocol PXStoryCompanionTimelineSegmentTransition, PXStoryTimeline;

@interface _PXStoryConcreteCompanionTimelineSegment : NSObject <PXStoryCompanionTimelineSegment>

@property (readonly, nonatomic) id<PXStoryTimeline> timeline;
@property (readonly, nonatomic) struct { long long identifier; struct { long long numberOfClips; BOOL clipFramesExtendToBounds; long long mainDividerAxis; double mainDividerSplitRatio; long long numberOfAssets; } compositionInfo; struct { char orderOutTransition; unsigned char options; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; char fallbackFromTransitionKind; union { char panDirection; char scaleDirection; char rotateDirection; char wipeKind; } ; union { double scaleRelativeFactor; double rotateAngleInDegrees; char wipeFirstAssetDirection; } ; } transitionInfo; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; long long rank; } preferredCue; char expectedTransitionKind; } durationInfo; } segmentInfo;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } preferredDuration;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) id<PXStoryCompanionTimelineSegmentTransition> orderOutTransition;

- (void).cxx_destruct;
- (id)initWithTimeline:(id)a0 segmentIndex:(long long)a1;

@end
