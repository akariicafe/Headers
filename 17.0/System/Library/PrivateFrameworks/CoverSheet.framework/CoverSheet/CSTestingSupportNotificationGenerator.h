@interface CSTestingSupportNotificationGenerator : NSObject {
    long long _sequenceNumber;
}

- (id)_nextNotificationRequest;
- (void)postNewNotificationToDestination:(id)a0;

@end
