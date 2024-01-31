@class NSString;

@interface VKAnalyticsMRCEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSString *barcodeSymbology;
@property (nonatomic) long long _dataType;
@property (readonly, nonatomic) long long dataType;

- (id)description;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (id)eventKey;
- (long long)type;
- (id)initWithElement:(id)a0 eventType:(long long)a1 customIdentifier:(id)a2;

@end
