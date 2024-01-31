@class NSString;

@interface iCloudSubscriptionOptimizerClient.NotificationPendingResponse : ISONotificationPendingResponse {
    void /* unknown type, empty encoding */ responseError;
    void /* unknown type, empty encoding */ maxDelayTsMillis;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)error;
- (BOOL)isNotificationPending;
- (id)maxDelayTimestampMillis;

@end
