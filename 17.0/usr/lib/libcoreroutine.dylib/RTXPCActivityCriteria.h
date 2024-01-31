@class NSNumber, NSMutableDictionary;

@interface RTXPCActivityCriteria : NSObject

@property (retain, nonatomic) NSMutableDictionary *additionalCriteria;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double gracePeriod;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL requireNetworkConnectivity;
@property (readonly, nonatomic) BOOL requireInexpensiveNetworkConnectivity;
@property (readonly, nonatomic) unsigned long long networkTransferDirection;
@property (readonly, nonatomic) BOOL allowBattery;
@property (readonly, nonatomic) BOOL powerNap;
@property (readonly, nonatomic) unsigned long long networkTransferUploadSize;
@property (readonly, nonatomic) unsigned long long networkTransferDownloadSize;
@property (readonly, nonatomic) NSNumber *requireBatteryLevel;
@property (nonatomic) double expectedDuration;
@property (nonatomic) BOOL cpuIntensive;
@property (nonatomic) BOOL userRequestedBackgroundTask;
@property (nonatomic) BOOL postInstall;
@property (nonatomic) BOOL requiresBuddyComplete;

+ (const char *)convertNetworkTransferDirection:(unsigned long long)a0;
+ (const char *)convertPriority:(unsigned long long)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0 gracePeriod:(double)a1 priority:(unsigned long long)a2 requireNetworkConnectivity:(BOOL)a3 requireInexpensiveNetworkConnectivity:(BOOL)a4 networkTransferDirection:(unsigned long long)a5 allowBattery:(BOOL)a6 powerNap:(BOOL)a7;
- (id)initWithInterval:(double)a0 gracePeriod:(double)a1 priority:(unsigned long long)a2 requireNetworkConnectivity:(BOOL)a3 requireInexpensiveNetworkConnectivity:(BOOL)a4 networkTransferUploadSize:(unsigned long long)a5 networkTransferDownloadSize:(unsigned long long)a6 allowBattery:(BOOL)a7 powerNap:(BOOL)a8 delay:(double)a9 requireBatteryLevel:(id)a10;

@end
