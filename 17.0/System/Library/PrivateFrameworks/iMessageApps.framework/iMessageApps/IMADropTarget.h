@interface IMADropTarget : NSObject

@property (readonly, nonatomic) struct CGPoint { double x; double y; } screenCoordinate;
@property (readonly, nonatomic) struct CGSize { double width; double height; } initialSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double meshScaleFactor;
@property (readonly, nonatomic) double rotation;

- (id)description;
- (id)initWithScreenCoordinate:(struct CGPoint { double x0; double x1; })a0 initialSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 meshScaleFactor:(double)a3 rotation:(double)a4;

@end
