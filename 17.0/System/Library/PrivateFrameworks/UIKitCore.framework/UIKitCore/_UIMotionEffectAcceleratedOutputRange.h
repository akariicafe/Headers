@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {
    struct UIOffset { double horizontal; double vertical; } _referenceOffset;
    struct CGPoint { double x; double y; } _referenceAcceleration;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } acceleration;

- (id)init;
- (unsigned long long)hash;
- (void)reset;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct UIOffset { double x0; double x1; })acceleratedOutputForViewerOffset:(struct UIOffset { double x0; double x1; })a0 accelerationBoostFactor:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isEqual:(id)a0;
- (void)setAcceleration:(struct CGPoint { double x0; double x1; })a0 fixingOutputForViewerOffset:(struct UIOffset { double x0; double x1; })a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
