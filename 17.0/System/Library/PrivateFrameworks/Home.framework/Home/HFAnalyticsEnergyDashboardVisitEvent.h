@class NSNumber, NSString;

@interface HFAnalyticsEnergyDashboardVisitEvent : HFAnalyticsEvent

@property (nonatomic) NSNumber *status;
@property (retain, nonatomic) NSString *gridID;
@property (nonatomic) BOOL isDoublePaneEnabled;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
