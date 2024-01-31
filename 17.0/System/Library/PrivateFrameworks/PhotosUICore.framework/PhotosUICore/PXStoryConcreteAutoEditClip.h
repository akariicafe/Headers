@class NSDictionary, NSArray;

@interface PXStoryConcreteAutoEditClip : NSObject <PXStoryMutableAutoEditClip>

@property (nonatomic) long long playbackStyle;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; } durationInfo;
@property (nonatomic) double durationMultiplier;
@property (nonatomic) struct { long long style; union { struct { unsigned long long direction; unsigned long long relativeMotion; } pan; struct { unsigned long long direction; } scale; struct { unsigned long long direction; } rotate; } settings; } motionInfo;
@property (nonatomic) struct { long long kind; double duration; union { struct { unsigned long long direction; unsigned long long relativeMotion; } pan; struct { unsigned long long direction; } scale; struct { unsigned long long direction; } rotate; struct { char kind; char firstAssetDirection; } wipe; } settings; } transitionInfo;
@property (nonatomic) struct { long long mode; long long modeBasis; float volume; double JCutLength; double LCutLength; double fadeIn; double fadeOut; } audioInfo;
@property (nonatomic) struct { long long moduleType; BOOL isStart; BOOL isBreak; } moduleInfo;
@property (copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, nonatomic) NSArray *displayAssets;

+ (id)composedClipWithClips:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayAsset:(id)a0;
- (id)initWithDisplayAssets:(id)a0;

@end
