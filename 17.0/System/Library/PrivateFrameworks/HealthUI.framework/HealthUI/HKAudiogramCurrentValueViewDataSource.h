@interface HKAudiogramCurrentValueViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSourceProtocol> {
    void /* unknown type, empty encoding */ applicationItems;
    void /* unknown type, empty encoding */ audiogram;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)showSeparators;
- (id)dateViewWithOrientation:(long long)a0;
- (id)leftMarginViewWithOrientation:(long long)a0;
- (long long)numberOfValuesForAnnotationView:(id)a0;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;
- (id)initWithApplicationItems:(id)a0;
- (void)updateWithAudiogram:(id)a0;

@end
