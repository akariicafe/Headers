@class BMComputeXPCPublisherStorage, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface BMComputeSourceClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    NSString *_machServiceName;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) BMComputeXPCPublisherStorage *storage;
@property (readonly, copy, nonatomic) NSString *streamIdentifier;

+ (id)new;
+ (void)setUseSynchronousXPCMessageSending:(BOOL)a0;

- (void)eventsPrunedWithReason:(unsigned long long)a0;
- (id)init;
- (void)sendEvent:(id)a0 timestamp:(double)a1 signpostID:(unsigned long long)a2 sendFullEvent:(BOOL)a3;
- (void)dealloc;
- (id)description;
- (id)initWithStreamIdentifier:(id)a0 listenerEndpoint:(id)a1 storage:(id)a2;
- (void).cxx_destruct;
- (id)initWithStreamIdentifier:(id)a0 domain:(unsigned long long)a1 useCase:(id)a2;
- (id)initWithStreamIdentifier:(id)a0 machServiceName:(id)a1 listenerEndpoint:(id)a2 storage:(id)a3;

@end
