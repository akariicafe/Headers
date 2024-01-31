@interface VKAnalyticsDDEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (nonatomic) unsigned long long dataDetectorTypes;

- (id)description;
- (id)coreAnalyticsDictionary;
- (id)eventKey;
- (long long)type;
- (id)initWithElement:(id)a0 eventType:(long long)a1 customIdentifier:(id)a2;

@end
