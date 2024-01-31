@class _UIShape, UIView;
@protocol UICoordinateSpace;

@interface UIFocusHaloEffect : UIFocusEffect {
    struct { unsigned char isResolved : 1; } _flags;
}

@property (readonly, nonatomic) _UIShape *_shape;
@property (readonly, nonatomic) id<UICoordinateSpace> _shapeCoordinateSpace;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *referenceView;
@property (nonatomic) long long position;

+ (id)effectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)effectWithPath:(id)a0;
+ (id)_effectWithUIShape:(id)a0;
+ (id)effectWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 curve:(id)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_resolvedEffectForItem:(id)a0;

@end
