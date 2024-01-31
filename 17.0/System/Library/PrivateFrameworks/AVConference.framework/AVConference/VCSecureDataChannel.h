@class VCTransport;
@protocol VCSecureDataChannelDelegate;

@interface VCSecureDataChannel : NSObject {
    unsigned int _localCallID;
    unsigned int _remoteCallID;
    struct _tls_record_s { } *tlsRecord;
    id _delegate;
    VCTransport *_transport;
}

@property (nonatomic) id<VCSecureDataChannelDelegate> delegate;
@property (readonly, nonatomic) long long maxEncryptedDataSize;
@property (readonly, nonatomic) long long maxUnencryptedDataSize;
@property (nonatomic) unsigned long long maxUDPPayloadSize;

- (void)dealloc;
- (int)sendData:(id)a0 messageType:(unsigned int)a1 encrypted:(BOOL)a2;
- (int)convertData:(id)a0 toEncryptedData:(id *)a1 encrypted:(BOOL)a2;
- (int)convertEncryptedData:(id)a0 toData:(id *)a1 encrypted:(BOOL)a2;
- (id)initWithLocalCallID:(unsigned int)a0 remoteCallID:(unsigned int)a1 isCaller:(BOOL)a2 sharedSecret:(id)a3 error:(id *)a4;
- (int)setupWithSharedSecret:(id)a0 isCaller:(BOOL)a1 error:(id *)a2;

@end
