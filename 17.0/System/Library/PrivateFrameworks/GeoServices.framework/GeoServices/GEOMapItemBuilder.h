@class NSString, GEOLocation, GEOLatLng, GEOMapRegion, GEOAddress;

@interface GEOMapItemBuilder : NSObject {
    struct { unsigned char referenceFrame : 1; } _has;
}

@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) int referenceFrame;
@property (retain, nonatomic) GEOAddress *address;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (retain, nonatomic) GEOLatLng *latlng;
@property (retain, nonatomic) NSString *name;

+ (id)buildWithSetterBlock:(id /* block */)a0;

- (id)init;
- (id)build;
- (void).cxx_destruct;

@end
