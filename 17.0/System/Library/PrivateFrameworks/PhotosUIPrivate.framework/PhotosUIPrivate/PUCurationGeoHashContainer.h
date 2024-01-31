@class NSString, NSArray;

@interface PUCurationGeoHashContainer : NSObject

@property (readonly, nonatomic) NSString *geoHash;
@property (readonly, nonatomic) long long assetCount;
@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSString *cityName;

- (void).cxx_destruct;
- (id)initWithGeoHash:(id)a0 assetUUIDs:(id)a1 cityName:(id)a2;

@end
