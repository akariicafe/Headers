@class NSArray;

@interface NCNotificationMutableSystemSettings : NCNotificationSystemSettings

@property (nonatomic, getter=isScheduledDeliveryEnabled) BOOL scheduledDeliveryEnabled;
@property (nonatomic, getter=isScheduledDeliveryUninitialized) BOOL scheduledDeliveryUninitialized;
@property (nonatomic, getter=shouldScheduledDeliveryShowNextSummary) BOOL scheduledDeliveryShowNextSummary;
@property (copy, nonatomic) NSArray *scheduledDeliveryTimes;
@property (nonatomic) unsigned long long listDisplayStyleSetting;

- (void)setScheduledDeliveryShowNextSummary:(BOOL)a0;
- (void)setListDisplayStyleSetting:(unsigned long long)a0;
- (void)setScheduledDeliveryUninitialized:(BOOL)a0;
- (void)setScheduledDeliveryEnabled:(BOOL)a0;
- (void)setScheduledDeliveryTimes:(id)a0;

@end
