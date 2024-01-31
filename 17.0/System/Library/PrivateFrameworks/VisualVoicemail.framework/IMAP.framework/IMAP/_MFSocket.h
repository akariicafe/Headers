@class NSString, NSArray, MFStream, NSCondition, NSObject, NSInvocation;
@protocol OS_dispatch_queue;

@interface _MFSocket : NSObject {
    NSCondition *_rw_condition;
    struct __CFString { } *_connectionServiceType;
    NSInvocation *_eventHandler;
    NSInvocation *_connectionEventHandler;
    int _lowThroughputCounter;
    int _LowThroughputThreshold;
    BOOL _socketCanRead;
    BOOL _socketCanWrite;
    struct unique_ptr<ctu::OsLogLogger, std::default_delete<ctu::OsLogLogger>> { struct __compressed_pair<ctu::OsLogLogger *, std::default_delete<ctu::OsLogLogger>> { struct OsLogLogger *__value_; } __ptr_; } logger;
    const char *mambaID;
    NSString *rumbaID;
}

@property (retain) NSString *protocol;
@property (retain) MFStream *stream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *socket_from_stream_callback_queue;
@property int timeout;
@property BOOL usesOpportunisticSockets;
@property BOOL disableEphemeralDiffieHellmanCiphers;
@property (retain) NSArray *clientCertificates;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (copy) NSString *accountIdentifier;
@property (copy) NSString *networkAccountIdentifier;
@property (readonly) NSArray *serverCertificates;
@property (readonly) NSString *remoteHostname;
@property (readonly, nonatomic) unsigned int remotePortNumber;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (readonly, nonatomic) BOOL isValid;

- (void)abort;
- (void)setEventHandler:(id)a0;
- (void)dealloc;
- (BOOL)setSecurityProtocol:(id)a0;
- (long long)readBytes:(char *)a0 length:(unsigned long long)a1;
- (id)securityProtocol;
- (id).cxx_construct;
- (void)setConnectionServiceType:(struct __CFString { } *)a0;
- (void).cxx_destruct;
- (long long)writeBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)enableThroughputMonitoring:(BOOL)a0;
- (id)_negotiatedProtocolVersion;
- (BOOL)_startSSLHandshakeWithProtocol:(id)a0 errorPtr:(id *)a1;
- (void)__abort;
- (id)rumbaID;
- (BOOL)_waitForSocketOpenAndFlag;
- (BOOL)connectToHost:(id)a0 withPort:(unsigned int)a1;
- (id)initWithMambaID:(const char *)a0 rumba:(id)a1;
- (void)setClosingEventHandler:(id)a0;
- (unsigned int)threadsafe_bufferedByteCount;

@end
