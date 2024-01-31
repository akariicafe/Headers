@interface NUCGAffineTransform : NSObject

@property (readonly) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } value;

- (id)initWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
