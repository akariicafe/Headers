@interface NUSlowMotionUtilities : NSObject

+ (id)slowMotionAudioMixFromAsset:(id)a0 rate:(float)a1 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 error:(out id *)a3;
+ (id)slowMotionVideoFromAsset:(id)a0 rate:(float)a1 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 error:(out id *)a3;
+ (id)timeMapperForAssetDuration:(double)a0 rate:(float)a1 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 error:(out id *)a3;

@end
