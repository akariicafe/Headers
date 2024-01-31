@class NSString;

@interface PXPlacesTestDataPoint : NSObject <PXPlacesGeotaggable> {
    struct CLLocationCoordinate2D { double latitude; double longitude; } _coordinate;
}

@property (readonly) struct CGImage { } *image;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compareTo:(id)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 location:(struct CLLocationCoordinate2D { double x0; double x1; })a1;

@end
