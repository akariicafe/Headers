@class SMMessage;

@interface SMMessageDeletedNotification : RTNotification

@property (readonly, nonatomic) SMMessage *message;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
