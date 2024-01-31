@class NSString;

@interface HFAnalyticsDiscoverTabContentViewedEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *locale;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
