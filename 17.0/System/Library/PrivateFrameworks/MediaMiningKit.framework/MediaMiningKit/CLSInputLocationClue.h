@class CLSPlace;

@interface CLSInputLocationClue : CLSInputClue {
    CLSPlace *_place;
}

@property (nonatomic) unsigned long long numberOfAssets;

+ (id)clueWithLocation:(id)a0;
+ (id)cluesWithLocations:(id)a0;

- (id)place;
- (id)location;
- (void)setPlace:(id)a0;
- (id)region;
- (id)description;
- (double)gpsHorizontalAccuracy;
- (void).cxx_destruct;
- (id)projectedLocation;
- (id)placemark;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })closestCoordinates;
- (BOOL)isDefinite;
- (BOOL)isEqualToClue:(id)a0;
- (id)regionInPlacemark;

@end
