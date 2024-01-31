@class PXPlacesMapView;

@interface PXPlacesMapModeController : NSObject

@property (readonly, nonatomic) PXPlacesMapView *mapView;
@property (nonatomic) unsigned long long mapStyle;
@property (readonly, nonatomic) BOOL is3DPerspectiveActive;
@property (readonly, nonatomic) BOOL is3DPerspectiveActiveByCheckingPitch;
@property (readonly, nonatomic) BOOL supportsPerspectiveToggling;
@property (readonly, nonatomic) BOOL prefersRealisticElevationStyle;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_toggle3DModeByAdjustingPitch:(BOOL)a0;
- (id)initWithMapView:(id)a0 prefersRealisticElevationStyle:(BOOL)a1;
- (BOOL)toggle3DModeIfPossible;
- (BOOL)togglePerspectiveIfPossible;

@end
