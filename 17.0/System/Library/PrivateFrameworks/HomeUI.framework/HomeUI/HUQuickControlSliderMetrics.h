@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlSliderMetrics : NSObject

@property (readonly, nonatomic) HUIntrinsicSizeDescriptor *sizeDescriptor;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double widthToCornerRadiusRatio;

- (void).cxx_destruct;
- (id)initWithSizeDescriptor:(id)a0 cornerRadius:(double)a1 widthToCornerRadiusRatio:(double)a2;

@end
