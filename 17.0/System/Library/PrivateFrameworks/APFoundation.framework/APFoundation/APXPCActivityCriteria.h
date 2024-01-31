@class NSDictionary;

@interface APXPCActivityCriteria : NSObject

@property (nonatomic) long long firstRunInterval;
@property (nonatomic) long long delay;
@property (nonatomic) long long interval;
@property (nonatomic) BOOL requiresNetworkConnectivity;
@property (nonatomic) BOOL requireBuddyComplete;
@property (nonatomic) BOOL requireClassCData;
@property (nonatomic) BOOL allowBattery;
@property (nonatomic) BOOL requireSleep;
@property (nonatomic) BOOL isRepeating;
@property (nonatomic) long long gracePeriod;
@property (nonatomic) const char *priority;
@property (nonatomic) BOOL isCPUIntensive;
@property (nonatomic) NSDictionary *customProperties;

- (id)init;

@end
