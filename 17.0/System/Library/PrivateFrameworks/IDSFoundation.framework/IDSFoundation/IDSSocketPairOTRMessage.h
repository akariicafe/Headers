@class NSData, NSString, NSDate;

@interface IDSSocketPairOTRMessage : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    unsigned long long _offset;
    NSData *_data;
}

@property (readonly, nonatomic) unsigned char versionNumber;
@property (readonly, nonatomic) BOOL encrypted;
@property (readonly, nonatomic) BOOL shouldEncrypt;
@property (readonly, nonatomic) unsigned char protectionClass;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) unsigned short priority;
@property (nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL wantsAppAck;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (unsigned char)command;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithVersion:(unsigned char)a0 encrypted:(BOOL)a1 shouldEncrypt:(BOOL)a2 protectionClass:(unsigned char)a3 streamID:(unsigned short)a4 priority:(unsigned short)a5 sequenceNumber:(unsigned int)a6 data:(id)a7;

@end
