@interface EFLinearFunction : NSObject

@property (nonatomic) double slope;
@property (nonatomic) double intercept;

- (double)evaluateReverse:(double)a0;
- (double)evaluateX:(double)a0;
- (id)initWithLineThroughPoints:(id)a0;
- (id)initWithSlope:(double)a0 intercept:(double)a1;

@end
