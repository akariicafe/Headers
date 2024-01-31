@class NSString, CLCircularRegion, NSArray;

@interface CLSBusinessItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *isoCountryCode;
@property (copy, nonatomic) NSString *geoServiceProvider;
@property (nonatomic) BOOL cached;
@property (retain, nonatomic) CLCircularRegion *region;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) long long venueCapacity;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *businessCategories;
@property (readonly, nonatomic) BOOL isEnriched;

+ (id)_businessCategoriesFromGeoMapItems:(id)a0;
+ (double)_defaultRadiusForCategories:(id)a0;
+ (id)_regionFromMapItem:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 region:(id)a1 categories:(id)a2;
- (id)initFromMapItem:(id)a0 isoCountryCode:(id)a1 categoryOnly:(BOOL)a2;

@end
