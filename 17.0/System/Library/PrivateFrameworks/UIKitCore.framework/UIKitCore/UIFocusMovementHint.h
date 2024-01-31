@interface UIFocusMovementHint : NSObject <NSCopying>

@property (nonatomic) double translationAmount;
@property (nonatomic) double rotationAmount;
@property (readonly, nonatomic) struct CGVector { double dx; double dy; } movementDirection;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } perspectiveTransform;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } rotation;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } translation;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } interactionTransform;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMovementDirection:(struct CGVector { double x0; double x1; })a0 itemSize:(struct CGSize { double x0; double x1; })a1;

@end
