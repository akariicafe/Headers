@class NSString;

@interface PXAssetsSectionBlurViewConfiguration : NSObject <PXGViewUserData>

@property (readonly, nonatomic) double intensity;
@property (readonly, nonatomic) double maximumBlurRadius;
@property (readonly, nonatomic) double maximumDimmingFraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIntensity:(double)a0 maximumBlurRadius:(double)a1 maximumDimmingFraction:(double)a2;

@end
