@class NSMutableDictionary, NSArray, NSDate, NSMutableArray;

@interface PLMetricsFormatterJSON : NSObject {
    NSMutableDictionary *allMetrics;
    NSMutableArray *metricArray;
    NSArray *appTimeMapping;
    NSArray *appBGTimeMapping;
    NSArray *appBGTimeUpMapping;
    NSArray *appTimeUnpluggedMapping;
    NSArray *appTimeLocationActivityMapping;
    NSArray *appTimeCellularConditionMapping;
    NSArray *appNetworkIOWifiMapping;
    NSArray *appNetworkIOCellularMapping;
    NSArray *appDisplayAPLMapping;
    NSMutableArray *appEnergyFGMapping;
    NSMutableArray *appEnergyBGMapping;
    NSMutableArray *appEnergyTotalMapping;
    NSMutableArray *appEnergyBGAudioMapping;
    NSMutableArray *appEnergyBGLocationMapping;
    NSArray *diskIOMapping;
    NSArray *memoryMapping;
    char tmpFilePath[1024];
}

@property (retain) NSDate *logFileTimeStamp;

+ (id)pruneDictionary:(id)a0 withAllowlist:(id)a1;

- (void)test;
- (id)init;
- (id)sanitizeDictionary:(id)a0;
- (void).cxx_destruct;
- (id)getOSVersion;
- (void)addAllMetrics:(id)a0 signpostData:(id)a1;
- (void)addAppEnergy:(id)a0 userData:(id)a1;
- (void)addAppMemoryKeys:(id)a0 userData:(id)a1;
- (void)addAppMetaData:(id)a0 userData:(id)a1;
- (void)addAppMetric:(id)a0;
- (void)addAppPerformanceKeysActivations:(id)a0 activationData:(id)a1;
- (void)addAppPerformanceKeysExits:(id)a0 processExitData:(id)a1;
- (void)addAppPerformanceKeysGlitch:(id)a0 scrollGlitchData:(id)a1;
- (void)addAppPerformanceKeysHang:(id)a0 userData:(id)a1 hangTimeData:(id)a2;
- (void)addAppPerformanceKeysLaunch:(id)a0 userData:(id)a1 launchTimeData:(id)a2;
- (void)addAppPerformanceKeysResume:(id)a0 userData:(id)a1 resumeTimeData:(id)a2;
- (void)addAppTime:(id)a0 userData:(id)a1;
- (void)addDiskIO:(id)a0 userData:(id)a1;
- (void)addDisplayAPL:(id)a0 userData:(id)a1;
- (void)addGlobalMetaData:(id)a0;
- (void)addNetworkIO:(id)a0 userData:(id)a1;
- (void)addPerformanceMetrics:(id)a0 userData:(id)a1 signpostData:(id)a2;
- (void)addPowerMetrics:(id)a0 userData:(id)a1;
- (void)addSubKeys:(id)a0 extractFromHere:(id)a1 deviceFirstLevelMetric:(id)a2 firstLevelKey:(id)a3 secondLevelKey:(id)a4 subKeyMap:(id)a5;
- (void)addSubKeysThirdLevel:(id)a0 extractFromHere:(id)a1 deviceFirstLevelMetric:(id)a2 firstLevelKey:(id)a3 secondLevelKey:(id)a4 thirdLevelKey:(id)a5 subKeyMap:(id)a6;
- (BOOL)checkKeyExistence:(id)a0 secondLevel:(id)a1 dictToCheck:(id)a2;
- (id)createHeaderForSessionsFile;
- (id)customRound:(int)a0 precision:(int)a1;
- (id)getCurrentTimeFormatted:(BOOL)a0;
- (id)getFileHandle;
- (id)metricsToStringAsJSON;
- (BOOL)moveLogFile;
- (void)printAllMetricsToConsole;
- (void)pruneJSONData;
- (id)roundArrayValuesToNearestX:(id)a0 precision:(int)a1;
- (BOOL)testAllMetrics;
- (BOOL)writeSessionFile;

@end
