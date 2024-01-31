@class _DUIImageComponent, _DUIPreview;

@interface _DUIVisibleDroppedItem : NSObject <NSSecureCoding> {
    struct CGPoint { double x; double y; } _center;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long itemIndex;
@property (retain, nonatomic) _DUIImageComponent *imageComponent;
@property (copy, nonatomic) _DUIPreview *preview;
@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } appliedTransform;
@property (nonatomic) struct CGVector { double x0; double x1; } velocity;
@property (nonatomic) struct CGVector { double x0; double x1; } targetVelocity;
@property (nonatomic) union { struct { double x; double y; double z; } ; void /* unknown type, empty encoding */ vector; } velocity3D;
@property (nonatomic) union { struct { double x; double y; double z; } ; void /* unknown type, empty encoding */ vector; } targetVelocity3D;
@property (nonatomic) BOOL constrainSize;
@property (nonatomic) BOOL flipped;
@property (nonatomic) BOOL precisionMode;
@property (nonatomic) double rotation;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })center;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createSnapshotView;

@end
