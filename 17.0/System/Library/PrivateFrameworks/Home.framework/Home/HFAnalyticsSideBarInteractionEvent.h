@class NSString;

@interface HFAnalyticsSideBarInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *itemClassName;
@property (retain, nonatomic) NSString *deviceOrientationStr;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
