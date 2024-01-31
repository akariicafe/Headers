@class NSString;

@interface PFStoryConcreteRecipeClip : NSObject <PFStoryRecipeClip>

@property (readonly, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } idealDuration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoCueOffset;
@property (readonly, nonatomic) long long motionStyle;
@property (readonly, nonatomic) long long transition;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (void).cxx_destruct;
- (id)initWithAssetIdentifier:(id)a0 playbackStyle:(long long)a1 minimumDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 idealDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 maximumDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 videoCueOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 motionStyle:(long long)a6 transition:(long long)a7;
- (BOOL)isEqualToClip:(id)a0;

@end
