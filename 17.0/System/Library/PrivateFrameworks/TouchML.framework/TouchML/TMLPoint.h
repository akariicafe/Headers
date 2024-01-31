@interface TMLPoint : NSObject <TMLPointJSExports, NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;

+ (void)initializeJSContext:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CGPointValue;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0;

@end
