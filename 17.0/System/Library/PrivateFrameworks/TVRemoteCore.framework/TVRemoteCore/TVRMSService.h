@class NSString;

@interface TVRMSService : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSString *hostName;
@property (nonatomic) int port;
@property (nonatomic) long long serviceType;
@property (nonatomic) long long serviceDiscoverySource;
@property (nonatomic) long long serviceLegacyFlags;
@property (retain, nonatomic) NSString *homeSharingGroupKey;

+ (id)protobufsFromServices:(id)a0;
+ (id)servicesFromProtobufs:(id)a0;

- (BOOL)isLegacy;
- (id)initWithData:(id)a0;
- (id)data;
- (id)description;
- (id)protobuf;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToService:(id)a0;

@end
