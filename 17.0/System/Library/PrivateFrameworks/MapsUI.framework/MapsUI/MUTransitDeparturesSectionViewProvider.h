@interface MUTransitDeparturesSectionViewProvider : NSObject <NSObject, MKTransitSystemFilterViewDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ userInteractionDelegate;
    void /* unknown type, empty encoding */ footerAttributionViewModel;
    void /* unknown type, empty encoding */ cachedViews;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemFilterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_overallIncidentsView;
}

@property (nonatomic) void /* unknown type, empty encoding */ needsRebuild;

- (id)init;
- (void).cxx_destruct;
- (void)filterView:(id)a0 didChangeSystemSelection:(id)a1;
- (id)initWithDataSource:(id)a0 userInteractionDelegate:(id)a1;
- (id)sectionViewsForCurrentState;

@end
