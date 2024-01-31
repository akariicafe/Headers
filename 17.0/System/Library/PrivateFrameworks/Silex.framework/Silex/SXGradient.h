@class NSArray;

@interface SXGradient : NSObject

@property (readonly, nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, nonatomic) NSArray *colors;
@property (readonly, nonatomic) NSArray *locations;

- (id)initWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 colors:(id)a2 locations:(id)a3;
- (void).cxx_destruct;

@end
