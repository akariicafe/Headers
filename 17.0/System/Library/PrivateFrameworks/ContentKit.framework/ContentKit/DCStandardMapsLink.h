@class NSURL, NSDictionary;

@interface DCStandardMapsLink : DCMapsLink

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *queryDictionary;

+ (BOOL)isMapsURL:(id)a0;
+ (BOOL)isStandardAppleMapsURL:(id)a0;
+ (BOOL)isStandardGoogleMapsURL:(id)a0;
+ (id)mapsLinkWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (long long)zoomLevel;
- (unsigned long long)mapType;
- (id)destinationAddress;
- (BOOL)showsTraffic;
- (void).cxx_destruct;
- (id)startAddress;
- (id)searchQuery;
- (id)searchLocation;
- (unsigned long long)directionsMode;
- (id)searchNearQuery;
- (BOOL)showsStreetView;
- (id)centerLocation;
- (BOOL)showsBicycling;
- (BOOL)showsTransit;
- (id)streetViewLocation;

@end
