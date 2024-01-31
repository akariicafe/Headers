@class HMDAnalyticsPresenceEventData, HMDAnalyticsSignificantTimeEventData, HMDAnalyticsCalendarEventData, HMDAnalyticsCharacteristicEventData, HMDAnalyticsCharacteristicThresholdEventData, HMDAnalyticsDurationEventData, HMDAnalyticsLocationEventData;

@interface HMDAnalyticsTriggerEventData : HMFObject

@property (retain, nonatomic) HMDAnalyticsCalendarEventData *calendarEvent;
@property (retain, nonatomic) HMDAnalyticsCharacteristicEventData *charEvent;
@property (retain, nonatomic) HMDAnalyticsCharacteristicThresholdEventData *charThresholdEvent;
@property (retain, nonatomic) HMDAnalyticsDurationEventData *durationEvent;
@property (retain, nonatomic) HMDAnalyticsLocationEventData *locationEvent;
@property (retain, nonatomic) HMDAnalyticsPresenceEventData *presenceEvent;
@property (retain, nonatomic) HMDAnalyticsSignificantTimeEventData *significantTimeEvent;
@property (retain, nonatomic) HMDAnalyticsCharacteristicThresholdEventData *thresholdEvent;
@property (nonatomic) BOOL endEvent;

- (void).cxx_destruct;

@end
