@interface ICQUserNotifications : NSObject

+ (void)postUserNotificationWithIdentifier:(id)a0 title:(id)a1 subTitle:(id)a2 bodyText:(id)a3 url:(id)a4 replaceExisting:(BOOL)a5 offerID:(id)a6 completion:(id /* block */)a7;

@end
