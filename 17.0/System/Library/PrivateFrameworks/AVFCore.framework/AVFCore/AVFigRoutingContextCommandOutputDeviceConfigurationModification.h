@class NSString;

@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject <AVOutputDeviceConfigurationModification>

@property (readonly, nonatomic) struct __CFDictionary { } *routingContextCommandPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)setDeviceName:(id)a0;
- (id)init;
- (void)dealloc;
- (void)addPeerToHomeGroup:(id)a0;
- (void)removePeerWithIDFromHomeGroup:(id)a0;
- (void)setDevicePassword:(id)a0;
- (void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)a0;
- (void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;

@end
