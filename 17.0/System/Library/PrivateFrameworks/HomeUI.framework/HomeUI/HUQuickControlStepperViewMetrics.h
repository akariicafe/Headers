@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlStepperViewMetrics : NSObject

@property (readonly, nonatomic) HUIntrinsicSizeDescriptor *sizeDescriptor;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (id)initWithSizeDescriptor:(id)a0 orientation:(unsigned long long)a1 cornerRadius:(double)a2;

@end
