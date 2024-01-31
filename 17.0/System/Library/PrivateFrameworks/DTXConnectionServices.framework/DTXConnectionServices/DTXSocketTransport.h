@class NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface DTXSocketTransport : DTXFileDescriptorTransport {
    NSObject<OS_dispatch_semaphore> *_socketAcceptedSem;
    _Atomic int _socketSemProtector;
    NSArray *_addresses;
}

@property (readonly) int port;

+ (id)schemes;
+ (id)addressForHost:(const char *)a0 port:(int)a1;

- (void)disconnect;
- (void).cxx_destruct;
- (id)localAddresses;
- (id)initWithLocalPort:(int)a0;
- (void)_commonSocketTransportInit;
- (void)_setupChannelWithConnectedSocket:(int)a0 assumingOwnership:(BOOL)a1 orDisconnectBlock:(id /* block */)a2;
- (void)_setupWithLocalPort:(int)a0;
- (void)_signalSocketAccepted;
- (id)initWithConnectedSocket:(int)a0 disconnectAction:(id /* block */)a1;
- (id)initWithRemoteAddress:(id)a0;
- (unsigned int)supportedDirections;
- (unsigned long long)transmit:(const void *)a0 ofLength:(unsigned long long)a1;

@end
