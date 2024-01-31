@class NSString, HKHRAFibBurdenAnalysisResult, NSDictionary, NSNumber;

@interface HDHRAFibBurdenAnalysisAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HKHRAFibBurdenAnalysisResult *_result;
    long long _calculationType;
    NSNumber *_calculationTypeDetails;
    long long _numberOfTachograms;
    NSDictionary *_additionalPayloadFromAlgorithm;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (long long)_bucketNumberOfTachogramsFrom:(long long)a0;
- (id)_calculationTypeStringFromCalculationType:(long long)a0;
- (id)initWithResult:(id)a0 calculationType:(long long)a1 calculationTypeDetails:(id)a2 numberOfTachograms:(long long)a3 additionalPayloadFromAlgorithm:(id)a4;

@end
