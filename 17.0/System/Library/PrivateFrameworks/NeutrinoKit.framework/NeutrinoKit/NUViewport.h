@interface NUViewport : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double backingScaleFactor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } backingSize;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } backingPosition;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (id)description;
- (struct CGSize { double x0; double x1; })backingSize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })backingPosition;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 backingScaleFactor:(double)a1;

@end
