@class NSDate, ICURLBagEnhancedAudioConfiguration, NSArray, NSString, ICURLBagRadioConfiguration, NSMutableDictionary, NSDictionary, NSSet, AMSSnapshotBag, ICURLBagLibraryDAAPConfiguration, NSNumber;

@interface ICURLBag : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, copy, nonatomic) NSArray *_allBagKeys;

@property (copy, nonatomic) NSDictionary *bagValues;
@property (retain, nonatomic) NSMutableDictionary *convertedActionsCache;
@property (retain, nonatomic) NSArray *GUIDURLRegexPatterns;
@property (retain, nonatomic) NSSet *GUIDURLSchemes;
@property (readonly, copy, nonatomic) NSDictionary *_allValues;
@property (readonly, nonatomic) AMSSnapshotBag *amsBag;
@property (readonly, nonatomic) NSDictionary *_propertyListRepresentation;
@property (copy, nonatomic, setter=_setExpirationDate:) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL canPostKeybagSyncData;
@property (readonly, nonatomic) ICURLBagRadioConfiguration *radioConfiguration;
@property (readonly, nonatomic) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (readonly, nonatomic) ICURLBagEnhancedAudioConfiguration *enhancedAudioConfiguration;
@property (readonly, copy, nonatomic) NSString *storefrontHeaderSuffix;
@property (readonly, copy, nonatomic) NSDate *requestDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, copy, nonatomic) NSString *serverCorrelationKey;
@property (readonly, copy, nonatomic) NSString *serverEnvironment;
@property (readonly, copy, nonatomic) NSString *profileName;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, copy, nonatomic) NSNumber *sourceAccountDSID;
@property (readonly, copy, nonatomic) NSDictionary *allValues;

- (BOOL)_shouldMescalSignBodyForURL:(id)a0 withSignatureConfiguration:(id)a1;
- (id)mescalConfigurationForRequest:(id)a0;
- (id)urlForBagKey:(id)a0;
- (id)arrayForBagKey:(id)a0;
- (id)valuesForBagKeys:(id)a0;
- (id)stringForBagKey:(id)a0;
- (id)_initWithDictionary:(id)a0 amsBag:(id)a1 requestDate:(id)a2 expirationDate:(id)a3 serverCorrelationKey:(id)a4 serverEnvironment:(id)a5 profileName:(id)a6 profileVersion:(id)a7 sourceAccountDSID:(id)a8;
- (id)numberForBagKey:(id)a0;
- (void)_logMissingKey:(id)a0;
- (BOOL)shouldAppendMachineDataHeadersForURL:(id)a0;
- (id)mescalConfigurationForResponse:(id)a0;
- (id)_knownOptionalBagKeys;
- (id)_valueForBagKey:(id)a0;
- (id)_urlStringFromBagStringValue:(id)a0;
- (BOOL)hasValueForBagKey:(id)a0;
- (void)_validateGUIDURLConfigIfNeeded;
- (id)mescalConfigurationForResponseURL:(id)a0;
- (BOOL)boolValueForBagKey:(id)a0;
- (BOOL)isTrustedHostForURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAppendDeviceGUIDForURL:(id)a0;
- (id)_initWithPropertyListRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)valueForBagKey:(id)a0;
- (void)createAMSSnapshotBagWithCompletion:(id /* block */)a0;
- (long long)int64ValueForBagKey:(id)a0;
- (id)_initWithDictionary:(id)a0;
- (id)dictionaryForBagKey:(id)a0;
- (id)mescalConfigurationForRequestURL:(id)a0;
- (id)_knownIncorrectValues;

@end
