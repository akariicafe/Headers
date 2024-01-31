@class NSString, NSArray, NWHostEndpoint, NEIKEv2PacketTunnelProvider, NSObject;
@protocol OS_nw_error, OS_dispatch_semaphore, OS_nw_connection, OS_dispatch_queue;

@interface NEIKEv2CompanionDatapath : NSObject {
    BOOL _wasReady;
    unsigned char _state;
    unsigned char _connectionSetupAttempts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _identifier;
    long long _connectedInterfaceType;
    NSObject<OS_nw_connection> *_datapathConnection;
    NSString *_connectedEndpointString;
    NSArray *_resolvedEndpoints;
    NWHostEndpoint *_remoteEndpoint;
    NWHostEndpoint *_localEndpointForDatapath;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NEIKEv2PacketTunnelProvider *_provider;
    NSObject<OS_nw_error> *_lastConnectionError;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
