@class NSArray;
@protocol PXPlacesMapLayoutResult;

@interface PXPlacesMapThumbnailClusterLayout : PXPlacesMapLayout

@property (retain, nonatomic) id<PXPlacesMapLayoutResult> currentMapLayoutResult;
@property (nonatomic) unsigned long long currentChangeType;
@property (retain, nonatomic) NSArray *geotaggablesSortDescriptors;
@property (nonatomic) double horizontalClusteringDistancePixels;
@property (nonatomic) double verticalClusteringDistancePixels;

- (void).cxx_destruct;
- (id)_clusterGeotaggablesInViewPort:(id)a0;
- (id)_clusterGeotaggables:(id)a0 fromMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1 viewPort:(id)a2;
- (id)_clusterGeotaggables:(id)a0 usingHorizontalClusteringDistance:(double)a1 verticalClusteringDistance:(double)a2 viewPort:(id)a3 dataSource:(id)a4 primaryLayoutGeotaggables:(id)a5 maskToMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a6;
- (id)_clusterGeotaggablesInRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 forViewPort:(id)a1;
- (id)_handlePanToViewPort:(id)a0 dataSourceChange:(id)a1;
- (id)_handlePitchChangeToViewPort:(id)a0 dataSourceChange:(id)a1;
- (id)_handleZoomInToViewPort:(id)a0;
- (id)_handleZoomOutToViewPort:(id)a0;
- (id)_mutableSortedOrderdGeotaggablesSetFromSet:(id)a0;
- (id)_primaryGeotaggleInLayoutItem:(id)a0;
- (void)_sortGeotaggables:(id)a0;
- (unsigned long long)_viewPortChangeTypeFrom:(id)a0 to:(id)a1;
- (BOOL)_zoom:(double)a0 isEqualToZoom:(double)a1;
- (id)layoutForViewPort:(id)a0 andDataSourceChange:(id)a1;

@end
