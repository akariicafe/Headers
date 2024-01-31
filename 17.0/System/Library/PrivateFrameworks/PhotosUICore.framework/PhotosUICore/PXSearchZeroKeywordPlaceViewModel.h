@class NSArray;

@interface PXSearchZeroKeywordPlaceViewModel : PXSearchZeroKeywordBaseViewModel

@property (readonly, nonatomic) NSArray *keyAssetLocalIdentifiers;
@property (readonly, nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } region;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 representedObject:(id)a1 fullGeoLocationName:(id)a2 keyAssetLocalIdentifiers:(id)a3 region:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a4;
- (id)initWithType:(long long)a0 title:(id)a1 representedObject:(id)a2 fullGeoLocationName:(id)a3 keyAssetLocalIdentifiers:(id)a4 region:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a5;

@end
