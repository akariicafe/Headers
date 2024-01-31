@class NSDate, NSString, TPSAnalyticsDataProvider;

@interface TPSAnalyticsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) TPSAnalyticsDataProvider *dataProvider;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *deliveryInfoVersion;

- (id)eventName;
- (void)log;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_discoverabilityStream;
- (id)analyticsEventRepresentation;
- (id)duetEvent;
- (void)persistKeys;

@end
