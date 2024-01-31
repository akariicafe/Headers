@class NSString;

@interface HKInteractiveChartBloodGlucosePercentInRangeData : NSObject <HKGraphSeriesChartData>

@property (nonatomic) long long countInLevel2Hypoglycemia;
@property (nonatomic) long long countInLevel1Hypoglycemia;
@property (nonatomic) long long countInEuglycemia;
@property (nonatomic) long long countInHyperglycemia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)totalCount;
- (long long)countForClassification:(long long)a0;
- (double)fractionForClassification:(long long)a0;

@end
