@class NSData, NSString;

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet

@property (readonly, nonatomic) BOOL reverseLocationDataIsValid;
@property (readonly, nonatomic) NSData *reverseLocationData;
@property (readonly, nonatomic) BOOL shiftedLocationIsValid;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) unsigned long long variationSuggestionStates;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)placeNamesForLocalizedDetailedDescriptionIsHome:(BOOL *)a0;
- (id)localizedGeoDescriptionIsHome:(BOOL *)a0;
- (id)_locationInfo;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
