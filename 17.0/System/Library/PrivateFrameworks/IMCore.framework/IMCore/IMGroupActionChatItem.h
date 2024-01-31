@class IMHandle;

@interface IMGroupActionChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) IMHandle *sender;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 sender:(id)a1;

@end
