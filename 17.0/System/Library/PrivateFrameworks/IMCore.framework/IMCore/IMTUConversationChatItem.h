@class IMHandle, NSUUID, TUConversation, NSDate;

@interface IMTUConversationChatItem : IMTranscriptChatItem

@property (readonly, weak, nonatomic) TUConversation *tuConversation;
@property (readonly, nonatomic) NSUUID *tuConversationUUID;
@property (readonly, nonatomic) IMHandle *conversationInitiator;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) unsigned long long conversationAVMode;

- (id)activeCall;
- (BOOL)canDelete;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 conversationInitiator:(id)a1;

@end
