@class EMMailboxObjectID, NSUserActivity, NSURL, EMMessageObjectID, NSString, MFAttachment;

@interface MFMailQLAttachmentContext : NSObject

@property (readonly, copy, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) NSURL *attachmentURL;
@property (readonly, nonatomic, getter=isContentManaged) BOOL contentManaged;
@property (readonly, nonatomic) long long editBehavior;
@property (readonly, nonatomic) EMMessageObjectID *messageObjectID;
@property (readonly, nonatomic) EMMailboxObjectID *mailboxObjectID;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *senderDisplayName;
@property (readonly, nonatomic) BOOL shouldShowReplyAll;
@property (readonly, nonatomic) BOOL insertingDrawing;
@property (readonly, nonatomic) MFAttachment *attachmentBeingEdited;

+ (id)contextWithUserActivity:(id)a0;

- (void).cxx_destruct;
- (id)initWithAttachmentURL:(id)a0 editBehavior:(long long)a1 messageObjectID:(id)a2 mailboxObjectID:(id)a3 subject:(id)a4 senderDisplayName:(id)a5 shouldShowReplyAll:(BOOL)a6 contentManaged:(BOOL)a7;
- (id)initForInsertingDrawing;
- (id)initWithAttachmentBeingEdited:(id)a0;

@end
