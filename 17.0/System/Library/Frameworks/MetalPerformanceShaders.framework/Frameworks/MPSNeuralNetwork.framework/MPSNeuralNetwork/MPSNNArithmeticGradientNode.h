@interface MPSNNArithmeticGradientNode : MPSNNGradientFilterNode

@property (nonatomic) float primaryScale;
@property (nonatomic) float secondaryScale;
@property (nonatomic) float bias;
@property (nonatomic) unsigned long long secondaryStrideInPixelsX;
@property (nonatomic) unsigned long long secondaryStrideInPixelsY;
@property (nonatomic) unsigned long long secondaryStrideInFeatureChannels;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (readonly, nonatomic) BOOL isSecondarySourceFilter;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 isSecondarySourceFilter:(BOOL)a3;

- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1 isSecondarySourceFilter:(BOOL)a2;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 isSecondarySourceFilter:(BOOL)a3;

@end
