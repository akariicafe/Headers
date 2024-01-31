@class NSMutableDictionary;

@interface PPSMetadataStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *metricsByID;

+ (id)sharedStore;
+ (id)getMetadataHistoryForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2;
+ (id)getMetadataHistoryForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2 name:(id)a3;
+ (id)plistMetricsFromDir:(id)a0;
+ (id)plistMetricsFromDir:(id)a0 forSubsystem:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)getAllSubsystem;
- (void)buildDeviceMetadata;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
- (void)addMetricsToCache:(id)a0;
- (void)cacheFrameworkMetrics;
- (void)cacheFrameworkMetricsForSubsystem:(id)a0;
- (void)cachePlistMetrics;
- (void)cachePlistMetricsForSubsystem:(id)a0;
- (id)getAllFrameworkSubsystem;
- (id)getMetadataForSubsystem:(id)a0;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
- (void)loadMetricsForSubsystem:(id)a0;

@end
