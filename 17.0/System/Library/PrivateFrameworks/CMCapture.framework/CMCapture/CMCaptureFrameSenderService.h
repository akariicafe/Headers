@class NSString, NSData, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_source;

@interface CMCaptureFrameSenderService : NSObject {
    NSString *_endpointUniqueID;
    NSString *_endpointType;
    NSString *_endpointCameraUniqueID;
    NSData *_endpointAuditToken;
    NSData *_endpointProxyAuditToken;
    int _endpointPID;
    int _endpointProxyPID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_xpc_object> *_endpoint;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_clientQueue;
    struct __CVPixelBufferPool { } *_sendingPixelBufferPool;
    struct opaqueCMFormatDescription { } *_sendingSampleBufferFormatDescription;
    struct OpaqueVTPixelTransferSession { } *_sendingPixelTransferSession;
    NSObject<OS_dispatch_source> *_reapSendingPixelTransferSessionTimer;
    double _sendingPixelBufferPoolAgeOutTime;
    unsigned long long _sendingPixelBufferWidth;
    unsigned long long _sendingPixelBufferHeight;
    unsigned int _sendingPixelBufferPixelFormatType;
    int _sendingPixelBufferPoolSize;
}

+ (void)initialize;

- (void)_addConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_cleanupSendingPixelBufferMachinery;
- (struct opaqueCMSampleBuffer { } *)_newSampleBufferToSendFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithEndpointType:(id)a0;
- (id)initWithEndpointType:(id)a0 endpointCameraUniqueID:(id)a1;
- (id)initWithEndpointType:(id)a0 endpointPID:(int)a1 endpointProxyPID:(int)a2 endpointAuditToken:(id)a3 endpointProxyAuditToken:(id)a4 endpointCameraUniqueID:(id)a5;
- (int)sendFrame:(struct opaqueCMSampleBuffer { } *)a0;

@end
