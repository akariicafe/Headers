@class NSString;

@interface PXPlacesMapContainerConfiguration : NSObject <PXMutablePlacesMapContainerConfiguration>

@property (nonatomic) BOOL gridViewEnabled;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } initialCoordinateRegion;
@property (retain, nonatomic) NSString *localizedNavigationItemTitle;
@property (nonatomic) BOOL enableNearbyAssetsAffordance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (id)initWithConfiguration:(id /* block */)a0;
- (void).cxx_destruct;

@end
