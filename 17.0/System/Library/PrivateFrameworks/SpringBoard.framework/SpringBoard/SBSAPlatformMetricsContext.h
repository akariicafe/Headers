@class NSString, NSMutableDictionary;

@interface SBSAPlatformMetricsContext : NSObject <NSCopying, SBSABlockMutating> {
    NSMutableDictionary *_metricsDictionary;
}

@property (class, readonly, nonatomic) Class mutatorClass;

@property (nonatomic, setter=_setMaximumCornerRadius:) double maximumCornerRadius;
@property (nonatomic, setter=_setCustomLayoutSquareCornerRadius:) double customLayoutSquareCornerRadius;
@property (nonatomic, setter=_setCustomLayoutSquareLargeCornerRadius:) double customLayoutSquareLargeCornerRadius;
@property (nonatomic, setter=_setCustomLayoutOvalCornerRadius:) double customLayoutOvalCornerRadius;
@property (nonatomic, setter=_setMinimumEdgePadding:) double minimumEdgePadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlatformMetricsContext:(id)a0;
- (id)copyBySettingCustomLayoutOvalCornerRadius:(double)a0;
- (id)copyBySettingCustomLayoutSquareCornerRadius:(double)a0;
- (id)copyBySettingCustomLayoutSquareLargeCornerRadius:(double)a0;
- (id)copyBySettingMaximumCornerRadius:(double)a0;
- (id)copyBySettingMinimumEdgePadding:(double)a0;

@end
