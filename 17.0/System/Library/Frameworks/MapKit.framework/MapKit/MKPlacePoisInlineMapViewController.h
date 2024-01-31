@class NSString, NSArray, CLLocation, _MKPlacePoisInlineMapContentView;

@interface MKPlacePoisInlineMapViewController : MKPlaceInlineMapViewController <MKStackingViewControllerFixedHeightAware> {
    NSArray *_fetchedMapItems;
    _MKPlacePoisInlineMapContentView *_mapContentView;
}

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) BOOL resizableViewsDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inlineMapWithMapItem:(id)a0 configuration:(id)a1;

- (void)viewDidLoad;
- (void)loadView;
- (long long)preferredUserInterfaceStyle;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_updateMap;
- (void)_handleTapOnMap;
- (id)visibleMapItems;
- (void)fetchPoisForBrand;
- (id)geoCamera;

@end
