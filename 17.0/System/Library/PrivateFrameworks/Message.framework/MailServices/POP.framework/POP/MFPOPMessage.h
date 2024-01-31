@class NSData, NSString;

@interface MFPOPMessage : MFMailMessage {
    NSData *_messageData;
    BOOL _messageDataIsComplete;
    unsigned long long _size;
    NSString *_accountURL;
}

@property (nonatomic) long long messageNumber;
@property (retain, nonatomic) NSData *messageData;
@property (copy, nonatomic) NSString *messageID;

- (unsigned long long)messageSize;
- (void)setMessageSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)headers;
- (id)headersIfAvailable;
- (BOOL)messageData:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (id)messageDataHolder;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (id)originalMailboxURL;
- (id)remoteMailboxURL;
- (void)setAccountURL:(id)a0;
- (void)setMessageData:(id)a0 isComplete:(BOOL)a1;

@end
