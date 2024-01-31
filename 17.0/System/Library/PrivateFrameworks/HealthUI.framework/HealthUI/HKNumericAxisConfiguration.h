@protocol HKAxisLabelDimension;

@interface HKNumericAxisConfiguration : HKAxisConfiguration

@property (retain, nonatomic) id<HKAxisLabelDimension> labelDimension;
@property (nonatomic) double topVerticalLabelPadding;
@property (nonatomic) double bottomVerticalLabelPadding;

- (id)init;
- (void).cxx_destruct;
- (void)applyOverridesFromNumericAxisConfiguration:(id)a0;

@end
