@class HULocationTriggerEditorMapDragRadiusView, HULocationTriggerRegion, MKPointAnnotation, GEOLocationShifter, MKLocalSearch, UISearchBar, UITableView, HMHome, UIView, NSString, NSArray, MKMapView, NSIndexPath;
@protocol HULocationTriggerRegionEditorViewControllerDelegate;

@interface HULocationTriggerRegionEditorViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegatePrivate, HFLocationManagerObserver, HULocationTriggerEditorMapDragRadiusViewDelegate, HUPreloadableViewController>

@property (retain, nonatomic) HULocationTriggerRegion *region;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) HULocationTriggerEditorMapDragRadiusView *dragView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) GEOLocationShifter *locationShifter;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSArray *recents;
@property (retain, nonatomic) MKLocalSearch *localSearch;
@property (retain, nonatomic) NSArray *localSearchResults;
@property (retain, nonatomic) MKPointAnnotation *desiredAddressAnnotation;
@property (nonatomic) double radiusInPoints;
@property (readonly, nonatomic) HMHome *home;
@property (weak, nonatomic) id<HULocationTriggerRegionEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_homeImage;
+ (id)_pinImage;

- (void)updateViewConstraints;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)_reloadData;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateUI;
- (BOOL)_hasLocation;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (id)_shiftLocationIfNeeded:(id)a0 isRetry:(BOOL)a1;
- (long long)_firstLocalSearchResultRowIndex;
- (void)_displayLocation:(id)a0;
- (long long)_firstRecentRowIndex;
- (long long)_homeRowIndex;
- (long long)_lastRecentRowIndex;
- (id)_locationForRecentMetadataDictionary:(id)a0;
- (unsigned long long)_proximityType;
- (void)_resetSearchResults;
- (void)_setupMap;
- (id)_shiftLocationIfNeeded:(id)a0;
- (void)_showMapRegionForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 animated:(BOOL)a2;
- (void)_updateRecentsWithSearchText:(id)a0;
- (void)_updateUIWithRegion:(id)a0;
- (id)hu_preloadContent;
- (id)initWithRegion:(id)a0 home:(id)a1 delegate:(id)a2;
- (void)mapRadiusView:(id)a0 radiusDidChange:(double)a1 radiusInPoints:(double)a2;
- (id)showLocationRegionInvalidAlert;

@end
