@class SCSensitivityAnalysisAvailabilityObserver;

@interface USAnalysisEnablementSubscription : NSObject {
    SCSensitivityAnalysisAvailabilityObserver *_analysisAvailabilityObserver;
}

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
