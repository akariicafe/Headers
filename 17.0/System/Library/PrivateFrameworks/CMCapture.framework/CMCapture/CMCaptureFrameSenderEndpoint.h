@class NSString, NSData, NSObject;
@protocol OS_xpc_object;

@interface CMCaptureFrameSenderEndpoint : NSObject

@property (readonly, copy) NSObject<OS_xpc_object> *endpoint;
@property (readonly, copy) NSString *endpointUniqueID;
@property (readonly, copy) NSString *endpointType;
@property (readonly) int endpointPID;
@property (readonly) int endpointProxyPID;
@property (readonly, copy) NSData *endpointAuditToken;
@property (readonly, copy) NSData *endpointProxyAuditToken;
@property (readonly, copy) NSString *endpointCameraUniqueID;

- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)description;

@end
