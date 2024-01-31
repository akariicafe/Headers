@class NSString;

@interface HKSPAnalyticsSleepScheduleChangeInfo : NSObject

@property (readonly, nonatomic) unsigned long long application;
@property (readonly, nonatomic) NSString *activePairedWatchProductType;
@property (readonly, nonatomic) BOOL isSleepTrackingEnabled;

- (void).cxx_destruct;
- (id)applicationPayloadValue;
- (id)initWithApplication:(unsigned long long)a0 activePairedWatchProductType:(id)a1 isSleepTrackingEnabled:(BOOL)a2;

@end
