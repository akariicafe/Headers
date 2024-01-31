@class CKDXPCConnection, CKDLogicalDeviceContext;
@protocol CKXPCLogicalDeviceScopedClient;

@interface CKDLogicalDeviceScopedClientProxy : NSObject

@property (nonatomic) int pid;
@property (weak, nonatomic) CKDXPCConnection *clientConnection;
@property (retain, nonatomic) id<CKXPCLogicalDeviceScopedClient> logicalDeviceScopedClientProxyCreator;
@property (retain, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property BOOL hasBeenThrottled;

- (void)resetThrottles;
- (id)openFileWithOpenInfo:(id)a0 error:(id *)a1;
- (id)readBytesOfInMemoryAssetContentWithUUID:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (BOOL)processIsAttached;
- (void)addThrottle:(id)a0;
- (void)tearDown;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (void)_getLogicalDeviceScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedClientProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 clientProxyHandler:(id /* block */)a2;
- (id)initWithClientConnection:(id)a0 deviceContext:(id)a1;

@end
