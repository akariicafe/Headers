@interface UIViewSpringAnimationDescription : NSObject

@property (nonatomic) BOOL usesDampingRatioAndResponse;
@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (nonatomic) struct { double dampingRatio; double response; BOOL initialDampingRatioSpecified; BOOL initialResponseSpecified; double initialDampingRatio; double initialResponse; double dampingRatioSmoothing; double responseSmoothing; double targetSmoothing; double projectionDeceleration; double impulse; } parameters;

+ (id)descriptionWithSpringAnimationParameters:(struct { double x0; double x1; BOOL x2; BOOL x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })a0;
+ (id)descriptionWithTension:(double)a0 friction:(double)a1;

@end
