@class NSString, HKSampleType;

@interface HKAFibBurdenLifeFactorLoggingInitiatedAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HKSampleType *_sampleType;
    long long _context;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)determineFeatureVersionWithHealthDataSource:(id)a0;
- (id)initWithSampleType:(id)a0 context:(long long)a1;

@end
