@class NSString, NSDictionary;

@interface VUICachedMetricsEvent : NSObject

@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSDictionary *eventData;

- (void).cxx_destruct;
- (id)initWithEventType:(id)a0 eventData:(id)a1;

@end
