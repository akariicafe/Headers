@class NSData, NSConditionLock, NSObject;
@protocol OS_sec_protocol_metadata, OS_nw_framer, OS_nw_protocol_options, OS_nw_connection, OS_dispatch_queue;

@interface EAPBoringSSLSession : NSObject {
    int _state;
    int _handshakeStatus;
}

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) NSObject<OS_nw_protocol_options> *tlsProtocol;
@property (retain, nonatomic) NSObject<OS_nw_protocol_options> *customProtocol;
@property (nonatomic) NSObject<OS_sec_protocol_metadata> *secProtocolMetadata;
@property (retain, nonatomic) NSObject<OS_nw_framer> *customFramer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSData *msk;
@property (nonatomic) int state;
@property (nonatomic) void /* function */ *read;
@property (nonatomic) void /* function */ *write;
@property (nonatomic) void *clientContext;
@property (nonatomic) int handshakeStatus;
@property (nonatomic) struct __SecTrust { } *serverSecTrust;
@property (copy) id /* block */ secTrustCompletionHandler;
@property (retain, nonatomic) NSConditionLock *statusUpdateLock;
@property (nonatomic) unsigned int eapType;
@property (nonatomic) struct { BOOL x0; struct memoryBuffer_s *x1; struct memoryBuffer_s *x2; } *memIO;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (int)handshake;
- (BOOL)setClientIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1;
- (BOOL)configureSecProtocol:(struct EAPBoringSSLSessionParameters_s { struct __SecIdentity *x0; struct __CFArray *x1; unsigned short x2; unsigned short x3; void /* function */ *x4; void /* function */ *x5; unsigned int x6; struct *x7; } *)a0;
- (id)customProtocolDefinition;
- (int)deliverInput;
- (id)getEAPKeyMaterial;
- (unsigned char)getEAPMethodInUse;
- (unsigned short)getNegotiatedTLSVersion;
- (BOOL)getSessionResumed;
- (void)readApplicationData;
- (BOOL)setup:(struct EAPBoringSSLSessionParameters_s { struct __SecIdentity *x0; struct __CFArray *x1; unsigned short x2; unsigned short x3; void /* function */ *x4; void /* function */ *x5; unsigned int x6; struct *x7; } *)a0 clientContext:(void *)a1;
- (void)updateHandshakeStatus:(int)a0;

@end
