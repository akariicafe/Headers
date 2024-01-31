@class NSString, IMHandle;

@interface IMSenderChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMHandle *handle;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long transcriptSharingMessageType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 handle:(id)a1;
- (id)_initWithItem:(id)a0 handle:(id)a1 displayName:(id)a2 transcriptSharingMessageType:(long long)a3;

@end
