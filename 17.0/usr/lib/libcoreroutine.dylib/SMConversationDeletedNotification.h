@class SMHandle;

@interface SMConversationDeletedNotification : RTNotification

@property (readonly, nonatomic) SMHandle *receiverHandle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReceiverHandle:(id)a0;

@end
