@class PLAgent, PLTimer;

@interface PLIOReportAgentIOReportStats : PLIOReportStats

@property (retain) PLAgent *agent;
@property unsigned long long sampleAPAwakeTime;
@property (retain) PLTimer *halfHourTimer;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersID;
+ (int)idNumberFromIDDiff:(unsigned long long)a0;
+ (BOOL)shouldLogSoCStatsPMGRCountersID;
+ (id)maskedNameForChannelID:(unsigned long long)a0;
+ (id)columnNameForChannelID:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersDebug;

- (id)init;
- (void)initTaskOperatorDependancies;
- (void)logEventBackwardSoCStatsPMGRCounters;
- (id)initWithAgent:(id)a0;
- (void).cxx_destruct;

@end
