@interface BMStreamSyncPlatformPolicy : NSObject

@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) unsigned long long transportType;
@property (readonly, nonatomic) unsigned long long direction;

- (id)initWithPlatform:(long long)a0 transportType:(unsigned long long)a1 direction:(unsigned long long)a2;
- (id)initWithTransportType:(unsigned long long)a0 direction:(unsigned long long)a1;

@end
