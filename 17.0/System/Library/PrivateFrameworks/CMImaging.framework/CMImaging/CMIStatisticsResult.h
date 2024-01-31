@interface CMIStatisticsResult : NSObject {
    float _sumOfSquares;
    float _area;
}

@property (readonly, nonatomic) float min;
@property (readonly, nonatomic) float max;
@property (readonly, nonatomic) float sum;
@property (readonly, nonatomic) float mean;
@property (readonly, nonatomic) float variance;

- (id)initWithMin:(float)a0 max:(float)a1 sum:(float)a2 sumOfSquares:(float)a3 area:(float)a4;

@end
