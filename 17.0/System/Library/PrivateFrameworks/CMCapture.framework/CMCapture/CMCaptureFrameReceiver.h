@class NSString, NSDictionary, NSData, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CMCaptureFrameReceiver : NSObject {
    id /* block */ _frameReceiverHandler;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _connectionIsValid;
}

@property (class, readonly) NSDictionary *availableFrameSenderEndpointsByPID;

@property (readonly, copy) NSString *endpointUniqueID;
@property (readonly) int endpointPID;
@property (readonly) int endpointProxyPID;
@property (readonly, copy) NSData *endpointAuditToken;
@property (readonly, copy) NSData *endpointProxyAuditToken;

+ (void)initialize;

- (void)dealloc;
- (id)initWithFrameSenderServerEndpoint:(id)a0 frameReceiverHandler:(id /* block */)a1;

@end
