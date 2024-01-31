@interface _PXStoryConcreteCompanionTimelineSegmentTransition : NSObject <PXStoryCompanionTimelineSegmentTransition>

@property (readonly, nonatomic) struct { char orderOutTransition; unsigned char options; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; char fallbackFromTransitionKind; union { char panDirection; char scaleDirection; char rotateDirection; char wipeKind; } ; union { double scaleRelativeFactor; double rotateAngleInDegrees; char wipeFirstAssetDirection; } ; } transitionInfo;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;

- (id)initWithTransitionInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a0;

@end
