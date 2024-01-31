@interface MenstrualCyclesAppPlugin.AnalysisModel : _TtCs12_SwiftObject <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ isOnboardingCompleted;
    void /* unknown type, empty encoding */ _fertileWindowEstimatesForceDisabled;
    void /* unknown type, empty encoding */ _periodPredictionsForceDisabled;
    void /* unknown type, empty encoding */ _deviationDetectionForceDisabled;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;

@end
