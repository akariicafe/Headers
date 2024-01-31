@class NSString;

@interface DCCityMapperURLGenerator : DCMapsURLGenerator

@property (retain, nonatomic) NSString *startCoordinate;
@property (retain, nonatomic) NSString *endCoordinate;

+ (void)generateURLWithMapsLink:(id)a0 completionHandler:(id /* block */)a1;

- (id)host;
- (id)path;
- (void).cxx_destruct;
- (id)scheme;
- (void)populateQueryDictionary;

@end
