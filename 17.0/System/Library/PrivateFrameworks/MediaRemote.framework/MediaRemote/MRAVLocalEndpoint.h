@class MRAVRoutingDiscoverySession;

@interface MRAVLocalEndpoint : MRAVOutputContextEndpoint

@property (readonly, nonatomic) MRAVRoutingDiscoverySession *audioDiscoverySession;

+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)a0;
+ (id)sharedLocalEndpoint;

- (id)groupSessionInfo;
- (id)deviceInfo;
- (id)groupLeader;

@end
