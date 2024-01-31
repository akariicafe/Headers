@class NSString, CKEventMetric, NSDate;

@interface BRCEventMetric : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) BOOL isCKMetric;
@property (readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable;

- (id)description;
- (id)initWithEventName:(id)a0;
- (id)additionalPayload;
- (void).cxx_destruct;
- (double)duration;
- (void)associateWithCompletedOperation:(id)a0;
- (id)associatedAppTelemetryEvent;
- (id)subDescription;

@end
