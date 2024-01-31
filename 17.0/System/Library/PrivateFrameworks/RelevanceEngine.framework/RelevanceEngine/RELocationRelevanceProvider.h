@class NSString, CLLocation;

@interface RELocationRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryEncoding;
- (id)initWithLocationType:(unsigned long long)a0;
- (id)initWithLocation:(id)a0 radius:(double)a1;
- (id)initWithLocation:(id)a0 radius:(double)a1 accuracy:(double)a2;
- (id)providerWithBundleIdentifier:(id)a0;

@end
