@interface IHKSliderSpec : NSObject

@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) double identity;

- (id)init;
- (id)description;
- (id)initWithMin:(double)a0 max:(double)a1;
- (void)_initWithMin:(double)a0 max:(double)a1 identity:(double)a2;
- (id)initWithMin:(double)a0 max:(double)a1 identity:(double)a2;
- (double)toNativeRange:(double)a0;
- (double)toNormalizedRange:(double)a0;

@end
