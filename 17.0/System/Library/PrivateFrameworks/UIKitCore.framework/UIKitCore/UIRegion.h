@class UIBezierPath, PKRegion;

@interface UIRegion : NSObject <NSCopying, NSCoding> {
    PKRegion *_region;
}

@property (class, readonly, nonatomic) UIRegion *infiniteRegion;

@property (readonly, nonatomic) UIBezierPath *path;
@property (readonly, nonatomic) PKRegion *_region;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithRadius:(double)a0;
- (id)regionByIntersectionWithRegion:(id)a0;
- (void)containsPoints:(const float *)a0 locationStride:(long long)a1 results:(char *)a2 resultsStride:(long long)a3 count:(int)a4;
- (id)inverseRegion;
- (id)regionByDifferenceFromRegion:(id)a0;
- (id)regionByUnionWithRegion:(id)a0;

@end
