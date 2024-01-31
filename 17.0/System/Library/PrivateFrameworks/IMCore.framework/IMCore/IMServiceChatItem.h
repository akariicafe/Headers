@class IMServiceImpl, IMHandle;

@interface IMServiceChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMServiceImpl *service;
@property (readonly, nonatomic) IMHandle *handle;
@property (nonatomic, getter=isStewieSharingChat) BOOL stewieSharingChat;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 service:(id)a1 handle:(id)a2;

@end
