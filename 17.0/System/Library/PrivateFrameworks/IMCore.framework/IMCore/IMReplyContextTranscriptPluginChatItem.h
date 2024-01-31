@class NSString, IMMessageItem, IMItem;

@interface IMReplyContextTranscriptPluginChatItem : IMTranscriptPluginChatItem <IMReplyContext>

@property (retain, nonatomic) IMItem *_parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (copy, nonatomic) NSString *replyMessageGUID;
@property (readonly, nonatomic) IMMessageItem *messageItem;

- (BOOL)canDelete;
- (void).cxx_destruct;
- (BOOL)isReplyContextPreview;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(BOOL)a3 initialPayload:(id)a4 index:(long long)a5 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 parentChatHasKnownParticipants:(BOOL)a7 chatContext:(id)a8;

@end
