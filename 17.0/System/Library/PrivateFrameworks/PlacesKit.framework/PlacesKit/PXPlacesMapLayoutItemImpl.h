@class NSOrderedSet, NSString, NSMutableOrderedSet;

@interface PXPlacesMapLayoutItemImpl : NSObject <PXPlacesMapLayoutItem>

@property (retain, nonatomic) NSMutableOrderedSet *layoutGeotaggables;
@property struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) NSOrderedSet *geotaggables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addGeotaggable:(id)a0;
- (void)addGeotaggables:(id)a0;
- (BOOL)isEqualToLayoutItem:(id)a0;

@end
