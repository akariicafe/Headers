@class NSNumber, MTRDeviceControllerXPCConnection, MTRBaseDevice;
@protocol NSCopying;

@interface MTRClusterStateCacheContainer : NSObject

@property (copy, nonatomic) NSNumber *deviceID;
@property (weak, nonatomic) MTRDeviceControllerXPCConnection *xpcConnection;
@property (retain, nonatomic) id<NSCopying> xpcControllerID;
@property BOOL shouldUseXPC;
@property void *cppClusterStateCache;
@property (retain, nonatomic) MTRBaseDevice *baseDevice;

- (id)init;
- (void).cxx_destruct;
- (void)readAttributesWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)setXPCConnection:(id)a0 controllerID:(id)a1 deviceID:(id)a2;

@end
