@class NSString, CLCircularRegion;

@interface REGeofenceRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) CLCircularRegion *region;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRegion:(id)a0;
- (id)dictionaryEncoding;
- (id)initWithRegion:(id)a0 bundleIdentifier:(id)a1;

@end
