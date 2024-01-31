@class NSString;

@interface HFAnalyticsEnergyIndicatorAccessoryViewVisitEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *gridID;
@property (retain, nonatomic) NSString *adviceText;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
