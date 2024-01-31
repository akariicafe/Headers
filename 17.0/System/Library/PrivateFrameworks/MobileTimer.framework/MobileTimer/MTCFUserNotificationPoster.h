@class NSMutableDictionary;

@interface MTCFUserNotificationPoster : NSObject

@property (retain, nonatomic) NSMutableDictionary *notifications;

+ (id)sharedInstance;
+ (void)cancelNotificationsWithIdentifiers:(id)a0;
+ (void)postNotificationWithIdentifier:(id)a0 title:(id)a1 message:(id)a2 defaultButtonTitle:(id)a3 otherButtonTitle:(id)a4 bypassDND:(BOOL)a5 handler:(id /* block */)a6;

- (id)init;
- (void).cxx_destruct;

@end
