@class HMDAccessory;

@interface HMDBLEBroadcastEventReceived : HMMLogEvent

@property (readonly, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) BOOL hasExpectedGSN;

+ (id)broadcastEventFromAccessory:(id)a0 withExpectedGSN:(BOOL)a1;

- (void).cxx_destruct;
- (id)initBroadcastEventFromAccessory:(id)a0 withExpectedGSN:(BOOL)a1;

@end
