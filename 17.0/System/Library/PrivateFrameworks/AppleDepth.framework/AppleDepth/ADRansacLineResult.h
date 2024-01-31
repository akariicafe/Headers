@interface ADRansacLineResult : NSObject

@property (nonatomic) float slope;
@property (nonatomic) float intercept;

- (id)initWithSlope:(float)a0 intercept:(float)a1;

@end
