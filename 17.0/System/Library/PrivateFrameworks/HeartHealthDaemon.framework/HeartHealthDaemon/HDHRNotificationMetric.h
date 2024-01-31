@class NSString, NSNumber;

@interface HDHRNotificationMetric : NSObject

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (readonly, copy, nonatomic) NSString *notificationType;
@property (copy, nonatomic, getter=isDoNotDisturbOn) NSNumber *doNotDisturbOn;
@property (copy, nonatomic) NSNumber *notificationThreshold;
@property (copy, nonatomic) NSString *cardioFitnessNotificationType;
@property (nonatomic) long long irregularRhythmNotificationsAlgorithmVersion;

- (id)eventPayload;
- (void).cxx_destruct;
- (void)submit;
- (id)initWithNotificationType:(id)a0;

@end
