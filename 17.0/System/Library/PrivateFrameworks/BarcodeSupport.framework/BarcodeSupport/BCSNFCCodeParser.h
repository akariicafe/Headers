@class BCSNotificationServiceConnection;

@interface BCSNFCCodeParser : NSObject {
    BCSNotificationServiceConnection *_notificationServiceConnection;
}

- (void).cxx_destruct;
- (void)postNotificationForURL:(id)a0 payload:(id)a1 completionHandler:(id /* block */)a2;

@end
