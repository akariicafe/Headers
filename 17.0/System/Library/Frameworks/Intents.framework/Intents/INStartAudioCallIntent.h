@class NSArray, INStartCallRequestMetadata, NSString;

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>

@property (readonly, nonatomic) BOOL useSpeaker;
@property (readonly, nonatomic) long long destinationType;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (nonatomic) long long audioRoute;
@property (nonatomic) long long preferredCallProvider;
@property (nonatomic) long long recordTypeForRedialing;
@property (nonatomic, setter=setTTYType:) long long ttyType;
@property (copy, nonatomic) INStartCallRequestMetadata *callRequestMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredParameters;

- (void)setContacts:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_spotlightContentType;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDestinationType:(long long)a0;
- (id)initWithContacts:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_currentParameterCombination;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_subtitleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (id)initWithDestinationType:(long long)a0 contacts:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setUseSpeaker:(BOOL)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
