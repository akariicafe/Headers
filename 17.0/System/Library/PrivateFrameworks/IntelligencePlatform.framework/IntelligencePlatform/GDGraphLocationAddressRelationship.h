@class NSString, NSArray;

@interface GDGraphLocationAddressRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSString *street;
@property (readonly, copy, nonatomic) NSString *subLocality;
@property (readonly, copy, nonatomic) NSString *city;
@property (readonly, copy, nonatomic) NSString *subAdministrativeArea;
@property (readonly, copy, nonatomic) NSString *state;
@property (readonly, copy, nonatomic) NSString *postalCode;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (readonly, copy, nonatomic) NSString *inferredSemanticLabel;
@property (readonly, copy, nonatomic) NSArray *allStreet;
@property (readonly, copy, nonatomic) NSArray *allSubLocality;
@property (readonly, copy, nonatomic) NSArray *allCity;
@property (readonly, copy, nonatomic) NSArray *allSubAdministrativeArea;
@property (readonly, copy, nonatomic) NSArray *allState;
@property (readonly, copy, nonatomic) NSArray *allPostalCode;
@property (readonly, copy, nonatomic) NSArray *allCountry;
@property (readonly, copy, nonatomic) NSArray *allIsoCountryCode;
@property (readonly, copy, nonatomic) NSArray *allInferredSemanticLabel;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStreetField:(id)a0 subLocalityField:(id)a1 cityField:(id)a2 subAdministrativeAreaField:(id)a3 stateField:(id)a4 postalCodeField:(id)a5 countryField:(id)a6 isoCountryCodeField:(id)a7 inferredSemanticLabelField:(id)a8 allStreetField:(id)a9 allSubLocalityField:(id)a10 allCityField:(id)a11 allSubAdministrativeAreaField:(id)a12 allStateField:(id)a13 allPostalCodeField:(id)a14 allCountryField:(id)a15 allIsoCountryCodeField:(id)a16 allInferredSemanticLabelField:(id)a17;

@end
