@interface CKExpirableMessageChatItem : CKAttachmentMessagePartChatItem

@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isSaved;

- (BOOL)canForward;
- (BOOL)canCopy;
- (BOOL)canExport;
- (BOOL)canSendAsTextMessage;

@end
