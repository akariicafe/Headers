@protocol NSObject;

@interface SGCuratedChangeNotificationsCalendarListener : SGCuratedChangeNotificationsBaseListener {
    id<NSObject> _notificationCenterToken;
}

- (void)startListening;
- (void).cxx_destruct;
- (void)stopListening;

@end
