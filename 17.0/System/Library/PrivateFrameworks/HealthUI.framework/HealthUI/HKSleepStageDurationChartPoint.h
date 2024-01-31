@class HKSleepChartPointUserInfo, NSString;

@interface HKSleepStageDurationChartPoint : HKSleepDurationChartPoint <HKSleepSleepChartPointUserInfoProvider>

@property (nonatomic) double awakeValue;
@property (nonatomic) double asleepRemValue;
@property (nonatomic) double asleepCoreValue;
@property (nonatomic) double asleepDeepValue;
@property (nonatomic) double totalDurationValue;
@property (nonatomic) double maxDurationValue;
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chartPointsForSummaries:(id)a0 context:(id)a1;

- (id)allYValues;
- (id)maxYValue;

@end
