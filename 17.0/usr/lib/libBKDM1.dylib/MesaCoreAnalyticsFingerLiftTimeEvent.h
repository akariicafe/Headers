@class NSNumber, NSDate;

@interface MesaCoreAnalyticsFingerLiftTimeEvent : MesaCoreAnalyticsEvent {
    NSDate *_fingerOnDate;
    NSDate *_fingerOffDate;
}

@property (retain) NSNumber *fingerLiftTime;

- (id)init;
- (void)reset;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)postEvent;
- (void)handleStatusMessage:(unsigned int)a0 forOperation:(unsigned char)a1;

@end
