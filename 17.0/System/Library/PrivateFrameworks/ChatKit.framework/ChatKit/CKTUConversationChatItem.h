@class NSUUID;

@interface CKTUConversationChatItem : CKMessagePartChatItem

@property (readonly, nonatomic) char color;
@property (readonly, weak, nonatomic) NSUUID *tuConversationUUID;
@property (readonly, nonatomic, getter=isSenderUnknown) BOOL senderUnknown;
@property (readonly, nonatomic) unsigned long long conversationAVMode;

- (id)time;
- (id)sender;
- (id)message;
- (BOOL)canForward;
- (BOOL)canCopy;
- (BOOL)isFromMe;
- (BOOL)shouldCacheSize;
- (Class)balloonViewClass;
- (BOOL)canAttachStickers;
- (BOOL)canInlineReply;
- (BOOL)canSendAsTextMessage;
- (BOOL)canSendMessageAcknowledgment;
- (void)configureBalloonView:(id)a0;
- (id)faceTimeConversation;
- (BOOL)isSendersUnknown;
- (long long)stewieConversationID;

@end
