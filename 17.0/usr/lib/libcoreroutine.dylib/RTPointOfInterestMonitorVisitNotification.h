@class RTVisit;

@interface RTPointOfInterestMonitorVisitNotification : RTNotification

@property (readonly, nonatomic) RTVisit *visit;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVisit:(id)a0;

@end
