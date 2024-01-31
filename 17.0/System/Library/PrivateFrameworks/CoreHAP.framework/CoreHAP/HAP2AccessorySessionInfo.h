@interface HAP2AccessorySessionInfo : NSObject

@property (readonly, nonatomic) unsigned long long numIPAddresses;
@property (readonly, nonatomic) unsigned long long numIPAddressesTried;
@property (readonly, nonatomic) unsigned long long numBonjourNames;

- (id)init;
- (id)initWithNumIPs:(unsigned long long)a0 numIPsTried:(unsigned long long)a1 numBonjourNames:(unsigned long long)a2;
- (void)resetWithNumIPs:(unsigned long long)a0 numIPsTried:(unsigned long long)a1 numBonjourNames:(unsigned long long)a2;

@end
