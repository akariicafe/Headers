@interface PPSOffDeviceIngesterUtilities : NSObject

+ (id)dataSourceForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2;
+ (id)metricDefinitionForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2 metricName:(id)a3;
+ (id)metricDefinitionHistoriesForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2;
+ (id)metricDefinitionHistoryForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2 metricName:(id)a3;
+ (id)metricDefinitionsForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2 metricNames:(id)a3;

@end
