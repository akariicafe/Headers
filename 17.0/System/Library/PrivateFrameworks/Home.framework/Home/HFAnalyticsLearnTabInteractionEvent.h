@class NSString;

@interface HFAnalyticsLearnTabInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *interactionType;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
