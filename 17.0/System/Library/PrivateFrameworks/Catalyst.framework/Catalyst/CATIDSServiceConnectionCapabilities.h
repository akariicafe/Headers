@interface CATIDSServiceConnectionCapabilities : NSObject

@property (readonly, nonatomic) BOOL supportsReliableDelivery;

- (id)init;
- (id)initWithMessagingVersion:(unsigned long long)a0;

@end
