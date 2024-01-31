@class NSString, NSNumber;

@interface HFAnalyticsBannerInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *itemClassName;
@property (retain, nonatomic) NSNumber *hiddenBannerCount;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
