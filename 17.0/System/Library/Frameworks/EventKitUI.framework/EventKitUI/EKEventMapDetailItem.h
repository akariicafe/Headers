@class CLLocation, NSArray, UIView, EKEventMapCell, MKMapItemView;

@interface EKEventMapDetailItem : EKEventDetailItem {
    EKEventMapCell *_cell;
    EKEventMapCell *_oldCell;
    MKMapItemView *_mapView;
    NSArray *_mapViewConstraints;
    UIView *_loadingView;
    NSArray *_loadingViewConstraints;
    CLLocation *_location;
    BOOL _animationHasRan;
}

@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)reset;
- (BOOL)_shouldShowMapView;
- (void)updateViewColors;
- (void)_setupCellWithMapView;
- (void)_setupCell;
- (void).cxx_destruct;
- (double)_mapHeight;
- (void)_animateMapIfNeededWithPresentingController:(id)a0 presentingView:(id)a1;
- (void)refreshCopiedEvents;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (void)eventViewController:(id)a0 tableViewDidScroll:(id)a1;
- (void)_setupCellAsEmpty;
- (void)_loadMapItem:(id)a0;
- (id)_mapRelatedViewConstraintsForMapRelatedView:(id)a0 inCell:(id)a1;
- (void)setupMapView;

@end
