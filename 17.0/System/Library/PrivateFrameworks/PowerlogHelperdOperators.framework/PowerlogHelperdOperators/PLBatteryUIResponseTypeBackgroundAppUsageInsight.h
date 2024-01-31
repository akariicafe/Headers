@class NSString, NSDictionary, NSDate, NSMutableArray, PLBatteryUIResponderService;

@interface PLBatteryUIResponseTypeBackgroundAppUsageInsight : NSObject <PLBatteryUIResponseProtocol>

@property BOOL suggest;
@property (retain) NSMutableArray *appsForBackgroundActivityInsight;
@property (retain) NSDictionary *nodeIDsToNodeNames;
@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property (retain) NSDate *monotonicNow;
@property double bucketSize;
@property (retain) NSMutableArray *buckets;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure:(id)a0;
- (void)run;
- (id)result;
- (void).cxx_destruct;
- (id)dependencies;
- (void)coalesce;
- (void)applyTransformationsForBuckets:(id)a0;
- (id)buildEnergyEntriesWithRootNodes:(id)a0 andQualificationNodes:(id)a1 andRange:(struct _PLTimeIntervalRange { double x0; double x1; })a2;
- (double)averageBackgroundDrainThreshold;
- (struct _PLTimeIntervalRange { double x0; double x1; })generateRangeFromConfiguration:(id)a0;
- (id)appsForBackgroundActivityInsightFromApps:(id)a0 withThresholdAboveAverageBackgroundDrainPercentage:(unsigned long long)a1 locationEnergyThreshold:(double)a2 inNDays:(unsigned long long)a3;
- (id)buildBucketWithEnergyEntries:(id)a0 andRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (void)buildBucketsForRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (int)computeNumberOfBuckets;
- (double)dailyBackgroundDrainThreshold;
- (long long)daysToTrackActivityForBatteryBreakdown:(long long)a0;
- (void)enumerateBucketsUsingBlock:(id /* block */)a0;
- (struct _PLTimeIntervalRange { double x0; double x1; })generateRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (id)getAppRuntimesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)getAppUsageEventsInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (struct _PLTimeIntervalRange { double x0; double x1; })getDataRange:(id)a0;
- (id)getNodeEntriesForEntryKey:(id)a0 withRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 andTimeInterval:(double)a2;
- (id)getNodeIDToNodeNameMap;
- (double)getNonAppRuntimesWith:(id)a0 identificationKey:(id)a1 andRange:(struct _PLTimeIntervalRange { double x0; double x1; })a2 withNow:(id)a3;
- (id)getQualificationNodeEntriesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withTimeInterval:(double)a1;
- (id)getRootNodeEntriesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withTimeInterval:(double)a1;
- (void)initializeBucketsWithRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (double)locationEnergyDrainThreshold;
- (id)mockAppForBackgroundActivityInsight;
- (id)perAppUsageForBatteryBreakdown:(id)a0 withStart:(unsigned long long)a1 withEnd:(unsigned long long)a2 withThresholdAboveDailyBackgroundDrainPercentage:(unsigned long long)a3;
- (void)prepareBucketsWithRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)processAppTimeEntries:(id)a0 inRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withAppArray:(id)a2;
- (id)processAppUsageEventsEntries:(id)a0 inRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withAppArray:(id)a2;
- (id)processQualificationNodes:(id)a0 inRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (id)processRootNodes:(id)a0 inRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (BOOL)shouldShowInsightThroughOverrides;

@end
