@interface HealthUI.StateOfMindOverlayContext : NSObject <HKOverlayContext> {
    void /* unknown type, empty encoding */ accessibilityIdentifier_;
    void /* unknown type, empty encoding */ overlayChartController;
    void /* unknown type, empty encoding */ overlayDisplayType;
    void /* unknown type, empty encoding */ overlayPredicate;
    void /* unknown type, empty encoding */ currentContextItem;
}

- (id)init;
- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)contextItemForLastUpdate;
- (long long)resolutionForTimeScope:(long long)a0 traitResolution:(long long)a1;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 resolution:(long long)a3 completion:(id /* block */)a4;

@end
