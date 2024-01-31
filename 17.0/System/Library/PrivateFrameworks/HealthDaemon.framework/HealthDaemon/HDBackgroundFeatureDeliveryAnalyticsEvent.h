@class NSString;

@interface HDBackgroundFeatureDeliveryAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    NSString *_featureIdentifier;
    NSString *_eventType;
    NSString *_countryCode;
    long long _countryCodeProvenance;
    NSString *_errorCategory;
    NSString *_errorDetail;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithFeatureIdentifier:(id)a0 eventType:(id)a1 countryCode:(id)a2 countryCodeProvenance:(long long)a3 errorCategory:(id)a4 errorDetail:(id)a5;

@end
