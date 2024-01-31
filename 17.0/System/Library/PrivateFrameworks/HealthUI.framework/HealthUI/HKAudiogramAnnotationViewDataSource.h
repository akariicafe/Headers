@interface HKAudiogramAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSourceProtocol> {
    void /* unknown type, empty encoding */ currentDateView;
    void /* unknown type, empty encoding */ keyValuePairs;
    void /* unknown type, empty encoding */ applicationItems;
    void /* unknown type, empty encoding */ hearingSensitivityFormatter;
    void /* unknown type, empty encoding */ averageSensitivityFormatter;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)showSeparators;
- (id)dateViewWithOrientation:(long long)a0;
- (id)leftMarginViewWithOrientation:(long long)a0;
- (long long)numberOfValuesForAnnotationView:(id)a0;
- (BOOL)reverseColumnsInRightToLeftLayoutDirection;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;
- (id)initWithApplicationItems:(id)a0;
- (void)updateWithPointSelectionContexts:(id)a0 date:(id)a1 isAverage:(BOOL)a2;

@end
