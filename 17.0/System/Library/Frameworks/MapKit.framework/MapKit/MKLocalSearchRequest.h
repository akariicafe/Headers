@class MKPointOfInterestFilter, _MKLocalSearchExternalTransitLookupParameters, NSArray, NSString, CLLocation, _MKLocalSearchMerchantParameters;
@protocol GEOCompletionItem;

@interface MKLocalSearchRequest : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL _hasRegion;
@property (readonly, nonatomic) id<GEOCompletionItem> geoCompletionItem;
@property (nonatomic) BOOL hasSentFeedbackForCompletion;
@property (retain, nonatomic, getter=_deviceLocation, setter=_setDeviceLocation:) CLLocation *deviceLocation;
@property (retain, nonatomic, getter=_merchantParameters, setter=_setMerchantParameters:) _MKLocalSearchMerchantParameters *merchantParameters;
@property (retain, nonatomic, getter=_externalTransitLookupParameters, setter=_setExternalTransitLookupParameters:) _MKLocalSearchExternalTransitLookupParameters *externalTransitLookupParameters;
@property (retain, nonatomic, getter=_phoneNumbers, setter=_setPhoneNumbers:) NSArray *phoneNumbers;
@property (nonatomic, getter=_allowPhoneNumberLookupUsingCellular, setter=_setAllowPhoneNumberLookupUsingCellular:) BOOL allowPhoneNumberLookupUsingCellular;
@property (retain, nonatomic, getter=_muids, setter=_setMuids:) NSArray *muids;
@property (nonatomic, getter=_resultProviderID, setter=_setResultProviderID:) int resultProviderID;
@property (retain, nonatomic, getter=_contactsDataString, setter=_setContactsDataString:) NSString *contactsDataString;
@property (retain, nonatomic, getter=_canonicalSearchString, setter=_setCanonicalSearchString:) NSString *canonicalSearchString;
@property (copy, nonatomic) NSString *naturalLanguageQuery;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } region;
@property (nonatomic) unsigned long long resultTypes;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;

+ (id)searchRequestWithCompletion:(id)a0;

- (id)_dictionaryRepresentation;
- (id)init;
- (id)initWithCompletion:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMapsURL:(id)a0;
- (id)initWithNaturalLanguageQuery:(id)a0;
- (id)initWithNaturalLanguageQuery:(id)a0 region:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1;

@end
