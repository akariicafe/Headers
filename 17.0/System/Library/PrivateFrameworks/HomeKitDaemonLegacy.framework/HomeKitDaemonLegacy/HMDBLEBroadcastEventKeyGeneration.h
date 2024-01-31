@class HMDAccessory;

@interface HMDBLEBroadcastEventKeyGeneration : HMMLogEvent

@property (readonly, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) int reason;

+ (id)broadcastKeyGenerationEventForAccessory:(id)a0 reason:(int)a1;

- (void).cxx_destruct;
- (id)initBroadcastKeyGenerationEventForAccessory:(id)a0 reason:(int)a1;

@end
