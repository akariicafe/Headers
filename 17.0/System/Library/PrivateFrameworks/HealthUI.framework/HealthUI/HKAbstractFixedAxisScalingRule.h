@class NSString, NSDictionary, NSNumber, HKValueRange;

@interface HKAbstractFixedAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

@property (nonatomic) BOOL shouldExpandBoundsForOutliers;
@property (readonly, nonatomic) HKValueRange *defaultAxisBounds;
@property (readonly, nonatomic) NSDictionary *axisBoundsOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_valueRangeForZoomLevel:(long long)a0;
- (id)noDataStartingRange;
- (id)yAxisBounds;
- (id)yValueRangeForRange:(id)a0 zoomLevel:(long long)a1;

@end
