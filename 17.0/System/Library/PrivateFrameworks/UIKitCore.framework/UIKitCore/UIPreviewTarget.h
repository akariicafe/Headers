@class UIView;

@interface UIPreviewTarget : NSObject <NSCopying> {
    struct CAPoint3D { double x; double y; double z; } _center;
}

@property (readonly, nonatomic) UIView *container;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } center;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

+ (id)new;

- (struct CGPoint { double x0; double x1; })center;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContainer:(id)a0 center:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithContainer:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;

@end
