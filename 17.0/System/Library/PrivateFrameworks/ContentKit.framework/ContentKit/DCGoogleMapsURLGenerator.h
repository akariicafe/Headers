@interface DCGoogleMapsURLGenerator : DCMapsURLGenerator

- (id)host;
- (id)path;
- (id)scheme;
- (id)directionsMode;
- (void)populateQueryDictionary;

@end
