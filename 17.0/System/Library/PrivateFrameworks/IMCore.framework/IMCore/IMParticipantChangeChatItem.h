@class NSUUID, IMHandle;

@interface IMParticipantChangeChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) IMHandle *otherHandle;
@property (retain, nonatomic) NSUUID *activeTelephonyConversationUUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 sender:(id)a1 otherHandle:(id)a2;
- (id)_initWithItem:(id)a0 sender:(id)a1 otherHandle:(id)a2 context:(id)a3;

@end
