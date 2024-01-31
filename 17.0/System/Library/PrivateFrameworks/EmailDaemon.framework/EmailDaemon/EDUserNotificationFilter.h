@protocol EMVIPReader, EMBlockedSenderReader;

@interface EDUserNotificationFilter : NSObject

@property (readonly, nonatomic) id<EMBlockedSenderReader> blockedSenderReader;
@property (readonly, nonatomic) id<EMVIPReader> vipReader;

- (void).cxx_destruct;
- (BOOL)_messageNeedsNotification:(id)a0;
- (id)initWithBlockedSenderReader:(id)a0 vipReader:(id)a1;
- (id)messagesNeedingNotification:(id)a0;

@end
