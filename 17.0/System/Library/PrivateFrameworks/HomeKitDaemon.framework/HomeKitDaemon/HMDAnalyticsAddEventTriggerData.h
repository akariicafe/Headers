@class HMDAnalyticsEventTriggerData;

@interface HMDAnalyticsAddEventTriggerData : HMFObject

@property unsigned long long timestamp;
@property (retain, nonatomic) HMDAnalyticsEventTriggerData *eventTrigger;
@property int requestOrigin;
@property unsigned int resultErrorCode;

- (void).cxx_destruct;

@end
