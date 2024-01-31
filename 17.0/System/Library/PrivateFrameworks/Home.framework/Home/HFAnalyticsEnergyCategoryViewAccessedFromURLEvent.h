@class NSString;

@interface HFAnalyticsEnergyCategoryViewAccessedFromURLEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *fromUIView;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
