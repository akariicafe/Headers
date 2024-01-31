@class NSArray, HKSleepChartPointUserInfo, NSString;

@interface HKSleepStageChartPoint : HKSleepPeriodChartPoint <HKSleepSleepChartPointUserInfoProvider>

@property (retain, nonatomic) NSArray *awakeOffsets;
@property (retain, nonatomic) NSArray *asleepUnspecifiedOffsets;
@property (retain, nonatomic) NSArray *asleepDeepOffsets;
@property (retain, nonatomic) NSArray *asleepCoreOffsets;
@property (retain, nonatomic) NSArray *asleepRemOffsets;
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_segment:(id)a0 isAdjacentToSegment:(id)a1;
+ (id)chartPointsForSummaries:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)allYValues;
- (id)yValuesForSleepAnalysis:(long long)a0;

@end
