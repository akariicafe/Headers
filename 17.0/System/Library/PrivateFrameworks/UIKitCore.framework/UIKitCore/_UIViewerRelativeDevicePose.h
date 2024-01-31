@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
}

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } viewerOffset;
@property (nonatomic) double planarRotationAngle;

- (unsigned long long)hash;
- (void)_reset;
- (void)encodeWithCoder:(id)a0;
- (id)_acceleratedOutputRange;
- (id)description;
- (void).cxx_destruct;
- (struct UIOffset { double x0; double x1; })_acceleratedOutputForViewerOffset:(struct UIOffset { double x0; double x1; })a0 accelerationBoostFactor:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isEqual:(id)a0;
- (void)_setAcceleration:(struct CGPoint { double x0; double x1; })a0 fixingOutputForViewerOffset:(struct UIOffset { double x0; double x1; })a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
