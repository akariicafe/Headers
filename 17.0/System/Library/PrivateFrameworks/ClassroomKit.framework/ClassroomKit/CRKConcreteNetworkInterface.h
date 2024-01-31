@class NSString, NSObject;
@protocol CRKNetworkEndpoint, OS_nw_interface;

@interface CRKConcreteNetworkInterface : NSObject <CRKNetworkInterface>

@property (readonly, nonatomic) NSObject<OS_nw_interface> *underlyingInterface;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) id<CRKNetworkEndpoint> ipv4Endpoint;
@property (readonly, nonatomic) id<CRKNetworkEndpoint> ipv6Endpoint;

- (void).cxx_destruct;
- (id)initWithUnderlyingInterface:(id)a0;
- (id)makeLocalEndpointForRemoteEndpointWithHost:(id)a0 port:(id)a1;

@end
