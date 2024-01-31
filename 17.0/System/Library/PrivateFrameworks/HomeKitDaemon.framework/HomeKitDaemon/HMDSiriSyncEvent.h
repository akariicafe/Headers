@class NSArray;

@interface HMDSiriSyncEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) NSArray *notificationReasons;
@property (readonly, nonatomic) unsigned long long lastSyncedConfigurationVersion;
@property (readonly, nonatomic) unsigned long long configurationVersion;
@property (readonly, nonatomic) unsigned long long serverConfigurationVersion;

+ (id)syncRequestWithDuration:(unsigned long long)a0 serverConfigurationVersion:(unsigned long long)a1 configurationVersion:(unsigned long long)a2 lastSyncedConfigurationVersion:(unsigned long long)a3 notificationReasons:(id)a4;

- (void).cxx_destruct;
- (id)initWithDuration:(unsigned long long)a0 serverConfigurationVersion:(unsigned long long)a1 configurationVersion:(unsigned long long)a2 lastSyncedConfigurationVersion:(unsigned long long)a3 notificationReasons:(id)a4;

@end
