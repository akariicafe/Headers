@interface DCBaiduMapsURLGenerator : DCMapsURLGenerator

- (id)host;
- (id)path;
- (id)scheme;
- (id)directionsMode;
- (void)populateQueryDictionary;

@end
