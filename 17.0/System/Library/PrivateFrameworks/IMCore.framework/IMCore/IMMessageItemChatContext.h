@class IMMessage;

@interface IMMessageItemChatContext : IMItemChatContext

@property (retain, nonatomic) IMMessage *message;
@property (nonatomic) BOOL invitation;

- (void)dealloc;
- (void).cxx_destruct;

@end
