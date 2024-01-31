@class NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface SGCuratedChangeNotificationsAddressBookListener : SGCuratedChangeNotificationsBaseListener {
    id<NSObject> _notificationCenterToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

- (void)startListening;
- (void).cxx_destruct;
- (void)stopListening;

@end
