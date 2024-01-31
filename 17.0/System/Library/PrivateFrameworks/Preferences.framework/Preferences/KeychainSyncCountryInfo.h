@class NSString;

@interface KeychainSyncCountryInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *dialingPrefix;
@property (retain, nonatomic) NSString *localizedCountryName;

+ (void)_loadCountriesIfNeeded;
+ (id)allCountries;
+ (id)countryInfoForCountryCode:(id)a0 dialingPrefix:(id)a1;
+ (id)countryInfoWithDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
