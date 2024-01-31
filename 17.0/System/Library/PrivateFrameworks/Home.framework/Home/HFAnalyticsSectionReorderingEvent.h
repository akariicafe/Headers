@class NSNumber, NSString;

@interface HFAnalyticsSectionReorderingEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *numberOfSections;
@property (retain, nonatomic) NSString *reorderingAction;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
