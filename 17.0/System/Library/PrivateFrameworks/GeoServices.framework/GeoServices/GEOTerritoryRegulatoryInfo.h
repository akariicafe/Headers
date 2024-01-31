@class NSString, NSArray;

@interface GEOTerritoryRegulatoryInfo : NSObject

@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) NSString *iso3166CountryCode;
@property (readonly, nonatomic) NSString *iso3166CountryCode2;
@property (readonly, nonatomic) NSString *iso3166CountryCode3;
@property (readonly, nonatomic, getter=isDisputed) BOOL disputed;
@property (readonly, nonatomic) NSString *disputedTerritoryName;
@property (readonly, nonatomic) NSArray *interestedPartyIso3166CountryCodes;
@property (readonly, nonatomic) NSArray *interestedPartyIso3166CountryCodes2;
@property (readonly, nonatomic) NSArray *interestedPartyIso3166CountryCodes3;
@property (readonly, nonatomic, getter=isCoastalWaters) long long coastalWaters;

- (unsigned long long)hash;
- (BOOL)isEqualToGEOTerritoryRegulatoryInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUnsafeTerritoryData:(id)a0 nameDB:(id)a1 iso3to2Mapping:(id)a2;
- (BOOL)isEqual:(id)a0;

@end
