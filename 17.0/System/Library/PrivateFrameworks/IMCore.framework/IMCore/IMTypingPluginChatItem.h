@class IMBalloonPluginDataSource, NSData, NSString;

@interface IMTypingPluginChatItem : IMTypingChatItem <IMPluginChatItemProtocol>

@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (readonly, nonatomic) NSData *typingIndicatorIcon;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 dataSource:(id)a1;

@end
