@class NSString;

@interface HKNumericAxisZeroOnly : HKNumericAxis

@property (readonly, nonatomic) NSString *zeroLabel;

- (void).cxx_destruct;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (id)initWithZeroLabel:(id)a0 axisConfiguration:(id)a1;

@end
