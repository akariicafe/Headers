@class NSString;

@interface ATXNotificationsActionPredictionRecord : ATXNotificationsRecord {
    NSString *_actionPredBundleId;
}

- (id)init;
- (BOOL)isMatchActionPredBundleId:(id)a0;
- (long long)determineEndingInteraction;
- (void).cxx_destruct;
- (BOOL)addEvent:(id)a0;
- (id)initWithNotificationId:(id)a0 timestamp:(id)a1;

@end
