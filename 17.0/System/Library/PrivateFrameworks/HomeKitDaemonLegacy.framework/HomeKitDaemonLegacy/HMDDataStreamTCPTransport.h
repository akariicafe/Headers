@class HMDDataStreamFrameReader, NSString, NSObject, HMFNetAddress;
@protocol OS_dispatch_queue, HMDNetworkConnection, HMDDataStreamTransportDelegate;

@interface HMDDataStreamTCPTransport : NSObject <HMFLogging, HMDDataStreamTransport> {
    BOOL _connected;
    long long _remotePort;
    int _schedulingMode;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFNetAddress *remoteAddress;
@property (retain, nonatomic) id<HMDNetworkConnection> tcpConnection;
@property (readonly, nonatomic) HMDDataStreamFrameReader *byteReader;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (copy, nonatomic) id /* block */ connectionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMDDataStreamTransportDelegate> delegate;

+ (id)logCategory;

- (void)close;
- (void)_start;
- (void)dealloc;
- (void)connect;
- (void)setTrafficClass:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_closeWithError:(id)a0;
- (void)_stopWithError:(id)a0;
- (void)_consumeReceivedData:(id)a0;
- (id)_createTcpConnection;
- (void)_doReceive;
- (void)_handleReadClose;
- (void)_registerForConnectionEvents;
- (id)initWithAddress:(id)a0 port:(long long)a1 targetQueue:(id)a2 logIdentifier:(id)a3;
- (id)initWithAddress:(id)a0 port:(long long)a1 workQueue:(id)a2 logIdentifier:(id)a3;
- (void)sendRawFrame:(id)a0 completion:(id /* block */)a1;

@end
