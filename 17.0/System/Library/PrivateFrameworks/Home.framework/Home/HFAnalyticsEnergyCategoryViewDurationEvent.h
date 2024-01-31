@class NSNumber;

@interface HFAnalyticsEnergyCategoryViewDurationEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *energyViewDuration;
@property (nonatomic) BOOL userHasAccessories;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
