@class NSUUID, NSMutableDictionary;

@interface PXCameraMessage : NSObject

@property (readonly, nonatomic) unsigned int magicNumber;
@property (readonly, nonatomic) unsigned int protocolVersion;
@property (copy, nonatomic) NSUUID *messageID;
@property (copy, nonatomic) NSUUID *senderID;
@property (nonatomic) unsigned int messageType;
@property (nonatomic) unsigned int partCount;
@property (nonatomic) unsigned int partIndex;
@property (nonatomic) unsigned int priority;
@property (retain, nonatomic) NSMutableDictionary *messageMetadata;
@property (retain, nonatomic) NSMutableDictionary *messageData;

+ (id)dataMessageID:(id)a0;
+ (unsigned int)expectedMessageDataSize:(id)a0;
+ (unsigned int)headerLengthForVersion:(unsigned int)a0;
+ (id)headerMessageID:(id)a0;
+ (unsigned int)uint32FromBytes:(char **)a0;
+ (id)uuidFromBytes:(char **)a0;

- (id)init;
- (void)dealloc;
- (id)dictionaryFromBytes:(char **)a0 length:(unsigned int)a1;
- (id)encodeMessage;
- (void)incrementBufPointer:(char **)a0 andOffset:(unsigned int *)a1 length:(unsigned int)a2;
- (id)initWithEncodedMessage:(id)a0;

@end
