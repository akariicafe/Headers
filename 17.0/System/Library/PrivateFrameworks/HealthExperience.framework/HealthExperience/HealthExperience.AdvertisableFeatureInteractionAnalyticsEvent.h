@class NSString;

@interface HealthExperience.AdvertisableFeatureInteractionAnalyticsEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ featureModels;
}

@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;
@property (nonatomic, readonly) NSString *eventName;

- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
