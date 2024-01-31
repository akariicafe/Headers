@class IMMessage, NSArray, IMMessageItem, NSString, NSItemProvider, CKMessagePartHighlightChatItem;

@interface CKMessagePartChatItem : CKBalloonChatItem

@property (readonly, copy, nonatomic) NSArray *messageAcknowledgments;
@property (readonly, nonatomic) IMMessage *message;
@property (readonly, nonatomic) IMMessageItem *messageItem;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) char color;
@property (readonly, nonatomic) NSArray *visibleAssociatedMessageChatItems;
@property (readonly, nonatomic) BOOL canSendMessageAcknowledgment;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } messagePartRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } originalMessagePartRange;
@property (readonly, nonatomic) BOOL hasMessageAcknowledgment;
@property (readonly, nonatomic) BOOL hasMessageAcknowledgmentWithNoneFromMe;
@property (readonly, nonatomic) BOOL hasStickers;
@property (readonly, nonatomic) BOOL isCorrupt;
@property (readonly, nonatomic) BOOL isBlackholed;
@property (readonly, nonatomic) long long stewieConversationID;
@property (readonly, nonatomic) CKMessagePartHighlightChatItem *messageHighlightChatItem;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasVisibleAssociatedMessageItems;
@property (readonly, nonatomic) BOOL isReply;
@property (readonly, nonatomic) BOOL isReplyContextPreview;
@property (readonly, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) IMMessageItem *threadOriginator;
@property (readonly, nonatomic) NSItemProvider *dragItemProvider;
@property (readonly, nonatomic) NSArray *pasteboardItemProviders;

- (id)time;
- (id)sender;
- (BOOL)canForward;
- (BOOL)canCopy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)failed;
- (long long)selectedType;
- (BOOL)isFromMe;
- (id)aggregateAcknowledgmentChatItem;
- (BOOL)_isSURFRelatedMessage;
- (void)_setVisibleAssociatedMessageChatItems:(id)a0;
- (BOOL)canAttachStickers;
- (BOOL)canInlineReply;
- (BOOL)canSendAsTextMessage;
- (id)compositionWithContext:(id)a0;
- (void)configureBalloonView:(id)a0;
- (id)fileURLForAttachment;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)stickersSnapToPoint;
- (id)tapbackActionButtonImageName;
- (double)timeIntervalSinceMessageSent;
- (id)votingCounts;

@end
