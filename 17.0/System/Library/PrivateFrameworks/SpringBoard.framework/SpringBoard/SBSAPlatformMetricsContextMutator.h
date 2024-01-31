@class SBSAPlatformMetricsContext;

@interface SBSAPlatformMetricsContextMutator : NSObject

@property (readonly, nonatomic) SBSAPlatformMetricsContext *mutatable;
@property (nonatomic) double maximumCornerRadius;
@property (nonatomic) double customLayoutSquareCornerRadius;
@property (nonatomic) double customLayoutSquareLargeCornerRadius;
@property (nonatomic) double customLayoutOvalCornerRadius;
@property (nonatomic) double minimumEdgePadding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPlatformMetricsContext:(id)a0;

@end
