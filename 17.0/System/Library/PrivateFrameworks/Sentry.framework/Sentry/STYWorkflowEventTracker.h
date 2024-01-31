@class WRWorkflowEventTracker;

@interface STYWorkflowEventTracker : NSObject

@property (retain) WRWorkflowEventTracker *wrTracker;
@property int perDayEventCount;
@property int perPeriodEventCount;

- (void).cxx_destruct;

@end
