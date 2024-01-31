@class EMMessageRepository, EMMessage;

@interface MFComposeMailMessage : MFMailMessage

@property (retain, nonatomic) EMMessage *emailMessageRepresentation;
@property (readonly, nonatomic) EMMessageRepository *messageRepository;

+ (id)legacyMessageWithMessage:(id)a0 mailboxUid:(id)a1;
+ (id)legacyMessageWithMessage:(id)a0 mailboxUid:(id)a1 skipAttachmentDownload:(BOOL)a2;

- (id)account;
- (void).cxx_destruct;
- (id)documentID;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsViewed;

@end
