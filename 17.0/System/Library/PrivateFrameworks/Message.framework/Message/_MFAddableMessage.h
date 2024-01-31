@class NSDate, NSString, NSArray, NSUUID, NSSet, ECSubject, NSDictionary, ECMessageFlags, MFLibraryMessage, ECAngleBracketIDHash;
@protocol ECMailbox, ECMimeBody, ECMailAccount, ECMessageHeaders;

@interface _MFAddableMessage : NSObject <ECMessage> {
    long long _messageIDHash;
}

@property (readonly, nonatomic) MFLibraryMessage *libraryMessage;
@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, copy, nonatomic) ECSubject *subject;
@property (readonly, copy, nonatomic) NSArray *from;
@property (readonly, copy, nonatomic) NSArray *to;
@property (readonly, copy, nonatomic) NSArray *cc;
@property (readonly, copy, nonatomic) NSArray *bcc;
@property (readonly, copy, nonatomic) NSArray *senders;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSDate *dateSent;
@property (readonly, copy, nonatomic) NSArray *listUnsubscribe;
@property (readonly, copy, nonatomic) NSString *remoteID;
@property (readonly, nonatomic) id<ECMailbox> mailbox;
@property (readonly, nonatomic) long long conversationID;
@property (readonly, nonatomic) BOOL isServerSearchResult;
@property (readonly, nonatomic) ECMessageFlags *flags;
@property (readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property (readonly, nonatomic) id<ECMimeBody> mimeBody;
@property (readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property (readonly, copy, nonatomic) NSString *messageIDHeader;
@property (readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property (readonly) NSSet *labels;
@property (readonly, nonatomic) id<ECMailAccount> account;
@property (readonly, nonatomic) id<ECMessageHeaders> headers;
@property (readonly, copy, nonatomic) NSArray *references;
@property (readonly, copy, nonatomic) NSUUID *documentID;
@property (readonly, nonatomic) unsigned long long numberOfAttachments;
@property (readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)mailbox;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)bestAlternativePart:(BOOL *)a0;
- (id)bestAlternativePartAsData:(BOOL *)a0 usingEncoding:(unsigned long long)a1;
- (id)initWithLibraryMessage:(id)a0 messageIDHash:(long long)a1 mailboxURL:(id)a2;
- (long long)messageIDHash;

@end
