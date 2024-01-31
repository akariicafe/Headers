@class NSNumber, NSDate;

@interface MesaCoreAnalyticsFingerTouchTimeEvent : MesaCoreAnalyticsEvent {
    NSDate *_fingerOnDate;
    NSDate *_fingerOffDate;
    NSDate *_sensorPauseDate;
    BOOL _requestFingerOff;
}

@property (retain) NSNumber *sensorPauseTime;
@property (retain) NSNumber *fingerOffTime;
@property (retain) NSNumber *eventEndType;
@property (retain) NSNumber *sensorPaused;
@property (retain) NSNumber *bioOperationType;

- (id)init;
- (void)reset;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)postEvent;
- (void)handleStatusMessage:(unsigned int)a0 forOperation:(unsigned char)a1 displayOn:(BOOL)a2;

@end
