@interface PNCropVariant : NSObject

@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) double cropScore;
@property (readonly, nonatomic) long long cropType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;

- (id)initWithAspectRatio:(double)a0 scaleFactor:(double)a1 cropScore:(double)a2 cropType:(long long)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

@end
