@class PLXPCResponderOperatorComposition, NSArray, NSMutableDictionary, NSMutableArray;

@interface PLAggregateSummarizationService : PLService

@property (retain) NSMutableDictionary *summarizedData;
@property (retain) NSMutableArray *metrics;
@property (retain) NSArray *appList;
@property double maxTimestamp;
@property (retain) PLXPCResponderOperatorComposition *aggregationResponder;

+ (id)modelIdentifier;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)osVersion;
+ (short)buildType;
+ (id)entryEventPointDefinitions;

- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)setupMetrics;
- (void)addMetrics:(id)a0 withType:(short)a1;
- (void)aggregateMetrics;
- (void)getAppList:(id)a0;
- (void)getAppMetadata;
- (id)getAppMultipleVersionsData;
- (id /* block */)getCellularConditionSummarizer;
- (id)getDeviceMetadataInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withSignpostData:(id)a1;
- (id)getDrainInfoInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id /* block */)getGenericSummarizer;
- (id)getInitCountInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id /* block */)getLocationActivitySummarizer;
- (id)getPluggedInDurationInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id /* block */)getQueryForAppMultipleVersions;
- (id /* block */)getQueryForAverageMemory;
- (id /* block */)getQueryForCellularCondition;
- (id /* block */)getQueryForCoalitionPowerData;
- (id /* block */)getQueryForDiskIO;
- (id /* block */)getQueryForDisplayAPL;
- (id /* block */)getQueryForLocationActivity;
- (id /* block */)getQueryForNetworkIOData;
- (id /* block */)getQueryForPeakMemory;
- (id)handleAggregationQueryWithPayload:(id)a0;
- (id)preformatMetricsForFormatter:(id)a0;

@end
