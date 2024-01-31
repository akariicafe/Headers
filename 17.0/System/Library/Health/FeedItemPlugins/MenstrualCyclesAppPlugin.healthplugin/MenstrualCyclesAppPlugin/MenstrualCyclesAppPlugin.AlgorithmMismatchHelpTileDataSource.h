@interface MenstrualCyclesAppPlugin.AlgorithmMismatchHelpTileDataSource : MenstrualCyclesAppPlugin.RoomDataSource <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ isOnboardingCompleted;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;

@end
