@class NSArray;

@interface PVTransformAnimation : NSObject <NSSecureCoding, NSCopying> {
    struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *_liveTransform;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *animationData;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } presentationTimeRange;
@property (nonatomic) double aspectRatio;

+ (BOOL)getTransformInfoFromAnimation:(id)a0 atLocalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 outInfo:(out struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a2;
+ (BOOL)getTransformInfoFromAnimation:(id)a0 atLocalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 renderSize:(struct CGSize { double x0; double x1; })a2 contentMode:(int)a3 invertY:(BOOL)a4 outInfo:(out struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a5;
+ (BOOL)getTransformInfoFromAnimation:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 outInfo:(out struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a2;
+ (BOOL)getTransformInfoFromAnimation:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 renderSize:(struct CGSize { double x0; double x1; })a2 contentMode:(int)a3 invertY:(BOOL)a4 outInfo:(out struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a5;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnimation:(id)a0;
- (struct CGSize { double x0; double x1; })basisForRenderSize:(struct CGSize { double x0; double x1; })a0 contentMode:(int)a1;
- (void)_commonInit:(id)a0 liveTransform:(struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a1 presentationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)animationInfoFromData:(id)a0;
- (struct CGSize { double x0; double x1; })basisForRenderSize:(struct CGSize { double x0; double x1; })a0 contentMode:(int)a1 invertY:(BOOL)a2;
- (id)dataFromAnimationInfo:(id)a0;
- (id)initWithAnimation:(id)a0 liveTransform:(struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a1 presentationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)initWithAnimation:(id)a0 simplify:(BOOL)a1 tolerance:(double)a2 smoothness:(unsigned int)a3;
- (id)initWithAnimationInfo:(struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })a0;
- (id)initWithLiveTransform:(struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a0;
- (struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })transformInfoAtLocalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })transformInfoAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
