@class NSDictionary, NSMutableDictionary;

@interface CMCaptureFrameSenderEndpoints : NSObject {
    NSMutableDictionary *_frameSenderEndpoints;
}

@property (readonly, retain, nonatomic) NSDictionary *endpointsByPID;

- (id)init;
- (void)dealloc;
- (BOOL)_pruneStalePIDsFromDictionary;
- (BOOL)addEndpoint:(id)a0 endpointUniqueID:(id)a1 endpointType:(id)a2 endpointPID:(int)a3 endpointProxyPID:(int)a4 endpointAuditToken:(id)a5 endpointProxyAuditToken:(id)a6 endpointCameraUniqueID:(id)a7;
- (id)createXPCArrayOfFrameSenderEndpoints;
- (id)initWithXPCArrayOfFrameSenderEndpoints:(id)a0;
- (BOOL)removeAllEndpointsWithPID:(int)a0;
- (BOOL)removeAllEndpointsWithPID:(int)a0 pruneStalePIDs:(BOOL)a1;
- (BOOL)removeEndpointWithUniqueID:(id)a0;

@end
