@interface WiFiUsageRangingRttSample : NSObject

@property (nonatomic) long long rssi;
@property (nonatomic) long long rtt;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned long long selfSnr;
@property (nonatomic) unsigned long long selfCoreId;
@property (nonatomic) unsigned long long selfBitErrorRate;
@property (nonatomic) unsigned long long selfPhyError;
@property (nonatomic) unsigned long long peerSnr;
@property (nonatomic) unsigned long long peerCoreId;
@property (nonatomic) unsigned long long peerBitErrorRate;
@property (nonatomic) unsigned long long peerPhyError;

@end
