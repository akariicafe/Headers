@class TMLSize, TMLPoint;

@interface TMLRect : NSObject <TMLRectJSExports, NSCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) TMLPoint *origin;
@property (readonly, nonatomic) TMLSize *size;
@property (readonly, nonatomic) double minx;
@property (readonly, nonatomic) double midx;
@property (readonly, nonatomic) double maxx;
@property (readonly, nonatomic) double miny;
@property (readonly, nonatomic) double midy;
@property (readonly, nonatomic) double maxy;
@property (readonly, nonatomic) TMLPoint *minpoint;
@property (readonly, nonatomic) TMLPoint *midpoint;
@property (readonly, nonatomic) TMLPoint *maxpoint;

+ (void)initializeJSContext:(id)a0;

- (id)description;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CGRectValue;
- (id)applyAffineTransform:(id)a0;
- (id)inset:(double)a0 :(double)a1;
- (id)applyScale:(double)a0;
- (id)atOrigin:(id)a0;
- (id)atOriginX:(double)a0 y:(double)a1;
- (id)integral;
- (id)max:(double)a0 :(double)a1;
- (id)min:(double)a0 :(double)a1;
- (id)offset:(double)a0 :(double)a1;
- (id)originInset:(double)a0 :(double)a1;
- (id)withHeight:(double)a0;
- (id)withWidth:(double)a0;

@end
