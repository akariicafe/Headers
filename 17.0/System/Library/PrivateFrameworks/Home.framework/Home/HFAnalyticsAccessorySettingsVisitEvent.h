@class HFItem;

@interface HFAnalyticsAccessorySettingsVisitEvent : HFAnalyticsEvent

@property (retain, nonatomic) HFItem *sourceItem;
@property (nonatomic) BOOL isHomePod;
@property (nonatomic) BOOL isMediaAccessory;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
