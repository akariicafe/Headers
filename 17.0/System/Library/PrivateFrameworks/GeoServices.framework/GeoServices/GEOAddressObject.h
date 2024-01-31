@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject <NSSecureCoding> {
    _GEOAddressObject *_pimpl;
    int *_knownAccuracy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) int knownAccuracy;

+ (BOOL)isLoggingDebug;
+ (BOOL)isMarkingMMStrings;
+ (void)setLoggingDebug:(BOOL)a0;
+ (id)libraryVersion;
+ (id)addressObjectForPlaceData:(id)a0;
+ (void)markMMStrings:(BOOL)a0;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;

- (id)spokenAddress;
- (id)venueLevel;
- (id)address;
- (id)countryName;
- (id)weatherLocationName;
- (unsigned long long)hash;
- (id)venueShortAddress;
- (id)weatherDisplayName;
- (void)dealloc;
- (id)neighborhoodName:(BOOL)a0;
- (id)shortAddress;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (id)addressDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (id)cnPostalAddress;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)spokenStructuredAddress;
- (id)initWithContactAddressDictionary:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)spokenName;
- (id)phoneticLocaleIdentifier;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)initWithCurrentCountry;
- (id)venueLabel:(long long)a0;
- (id)parkingDisplayName;
- (id)phoneticAddress;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (void).cxx_destruct;
- (id)spokenAddressForLocale:(id)a0;
- (id)venueLabel;
- (id)name;
- (id)rawBytes;
- (BOOL)isEqual:(id)a0;
- (id)phoneticName;
- (id)initWithCoder:(id)a0;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithCNPostalAddress:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)locationAddress;

@end
