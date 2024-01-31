@class MFMailboxUid, NSString, MFMessage, DAMailMessage;

@interface MFDAMessage : MFMailMessage {
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
}

@property (readonly, nonatomic) DAMailMessage *DAMailMessage;

- (unsigned long long)messageSize;
- (void).cxx_destruct;
- (id)headers;
- (id)mailbox;
- (id)messageBody;
- (id)externalConversationID;
- (id)headersIfAvailable;
- (id)initWithDAMailMessage:(id)a0 mailbox:(id)a1;
- (BOOL)messageData:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (unsigned long long)messageFlags;
- (id)remoteID;
- (id)remoteMailboxURL;

@end
