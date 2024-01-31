@class NSUUID, NSArray, NSString, NSDate;

@interface RTAddress : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSArray *subPremises;
@property (readonly, copy, nonatomic) NSString *subThoroughfare;
@property (readonly, copy, nonatomic) NSString *thoroughfare;
@property (readonly, copy, nonatomic) NSString *subLocality;
@property (readonly, copy, nonatomic) NSString *locality;
@property (readonly, copy, nonatomic) NSString *subAdministrativeArea;
@property (readonly, copy, nonatomic) NSString *administrativeArea;
@property (readonly, copy, nonatomic) NSString *administrativeAreaCode;
@property (readonly, copy, nonatomic) NSString *postalCode;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *inlandWater;
@property (readonly, copy, nonatomic) NSString *ocean;
@property (readonly, nonatomic) NSArray *areasOfInterest;
@property (readonly, nonatomic) BOOL isIsland;
@property (readonly, copy, nonatomic) NSString *iso3166CountryCode;
@property (readonly, copy, nonatomic) NSString *iso3166SubdivisionCode;
@property (readonly, nonatomic) NSString *mergedThoroughfare;

- (id)init;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 subPremises:(id)a1 subThoroughfare:(id)a2 thoroughfare:(id)a3 subLocality:(id)a4 locality:(id)a5 subAdministrativeArea:(id)a6 administrativeArea:(id)a7 administrativeAreaCode:(id)a8 postalCode:(id)a9 country:(id)a10 countryCode:(id)a11 inlandWater:(id)a12 ocean:(id)a13 areasOfInterest:(id)a14 isIsland:(BOOL)a15 creationDate:(id)a16 expirationDate:(id)a17 iso3166CountryCode:(id)a18 iso3166SubdivisionCode:(id)a19;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToAddress:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
