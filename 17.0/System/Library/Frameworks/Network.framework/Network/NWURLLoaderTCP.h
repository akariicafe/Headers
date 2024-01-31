@class NSString, NWURLSessionTaskConfiguration, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_sec_trust, OS_nw_connection, NWURLLoaderClient;

@interface NWURLLoaderTCP : NSObject <NWURLLoader> {
    BOOL _ready;
    BOOL _cancelled;
    BOOL _TLS;
    BOOL _addedTLS;
    NSString *_hostname;
    long long _port;
    NWURLSessionTaskConfiguration *_configuration;
    id<NWURLLoaderClient> _client;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingWork;
    NSObject<OS_nw_connection> *_connection;
    NSError *_error;
}

@property (readonly, nonatomic) NSObject<OS_sec_trust> *peerTrust;
@property (readonly, nonatomic) BOOL allowsWrite;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start:(id /* block */)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)responseIsMixed;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)readResponse:(id /* block */)a0;
- (void)updateClient:(id)a0;
- (void)writeData:(id)a0 complete:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
