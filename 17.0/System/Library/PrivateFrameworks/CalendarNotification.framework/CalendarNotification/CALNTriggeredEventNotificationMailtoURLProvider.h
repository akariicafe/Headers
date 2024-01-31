@protocol CALNMailAccounts;

@interface CALNTriggeredEventNotificationMailtoURLProvider : NSObject

@property (readonly, nonatomic) id<CALNMailAccounts> mailAccounts;

- (id)initWithMailAccounts:(id)a0;
- (id)mailtoURLForEvent:(id)a0;
- (void).cxx_destruct;

@end
