@class NSString, NSDictionary, NSData, NSDate;

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    NSString *_resourcePath;
    NSDictionary *_metadata;
    NSDictionary *_resourceAttributes;
    int _fileDescriptor;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressPayload;
    BOOL _compressed;
    BOOL _didWakeHint;
    NSString *_peerResponseIdentifier;
    NSDate *_expiryDate;
}

@property (readonly, nonatomic) BOOL sentFirstMessage;
@property (readonly, nonatomic) BOOL isDone;
@property (nonatomic) unsigned int maxChunkSize;
@property (nonatomic) BOOL resumeResourceTransfers;
@property (nonatomic) unsigned long long nextByte;
@property (readonly, nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSString *messageUUID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL wantsAppAck;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (retain, nonatomic) NSDate *expiryDate;

- (void)reset;
- (void)dealloc;
- (unsigned char)command;
- (id)description;
- (void).cxx_destruct;
- (id)nextMessage_old;
- (void)closeFileAndMarkDone;
- (id)initWithResourceAtPath:(id)a0 metadata:(id)a1 sequenceNumber:(unsigned int)a2 streamID:(unsigned short)a3 expectsPeerResponse:(BOOL)a4 wantsAppAck:(BOOL)a5 compressPayload:(BOOL)a6 compressed:(BOOL)a7 didWakeHint:(BOOL)a8 peerResponseIdentifier:(id)a9 messageUUID:(id)a10 expiryDate:(id)a11;
- (id)nextMessage;
- (id)readNextBytes;
- (BOOL)readNextBytes:(id *)a0 byteOffset:(unsigned long long *)a1;

@end
