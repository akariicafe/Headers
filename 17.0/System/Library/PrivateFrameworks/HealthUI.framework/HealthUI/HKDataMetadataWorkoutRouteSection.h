@class NSCache, HKDataMetadataWorkoutRouteCell, HKLocationReadings, HKLocationFetcher, HKRouteMapGenerator;

@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection <HKDataMetadataWorkoutRouteCellDelegate>

@property (retain, nonatomic) HKDataMetadataWorkoutRouteCell *cell;
@property (readonly, nonatomic) HKLocationReadings *locationReadings;
@property (retain, nonatomic) HKLocationFetcher *locationFetcher;
@property (retain, nonatomic) HKRouteMapGenerator *generator;
@property (retain, nonatomic) NSCache *routeImageCache;
@property (nonatomic) struct CGSize { double width; double height; } tableViewSize;

- (void).cxx_destruct;
- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)_cachedRouteImageForUserInterfaceStyle:(long long)a0 snapshotSize:(struct CGSize { double x0; double x1; })a1;
- (void)_generateRouteImageForTraitCollection:(id)a0;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (void)generateRouteImage;
- (id)initWithLocationReadings:(id)a0 tableViewSize:(struct CGSize { double x0; double x1; })a1;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (void)workoutRouteCell:(id)a0 didUpdateTraitCollection:(id)a1;

@end
