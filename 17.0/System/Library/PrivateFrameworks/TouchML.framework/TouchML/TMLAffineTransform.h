@interface TMLAffineTransform : NSObject <TMLAffineTransformJSExports>

@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly, nonatomic) double a;
@property (readonly, nonatomic) double b;
@property (readonly, nonatomic) double c;
@property (readonly, nonatomic) double d;
@property (readonly, nonatomic) double tx;
@property (readonly, nonatomic) double ty;

+ (void)initializeJSContext:(id)a0;

- (id)CGAffineTransformValue;
- (id)initWithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
