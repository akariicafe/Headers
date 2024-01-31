@interface MenstrualCyclesAppPlugin.CycleFactorsDataSource : MenstrualCyclesAppPlugin.RoomDataSource <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ isOnboardingCompleted;
    void /* unknown type, empty encoding */ shouldShowTileHeader;
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ analysis;
    void /* unknown type, empty encoding */ featureSettings;
    void /* unknown type, empty encoding */ deviationsFeatureStatus;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tileHeaderItem;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;

@end
