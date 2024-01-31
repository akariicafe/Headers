@class NSNumber, INSpeakableString, NSString;

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (readonly, copy, nonatomic) NSNumber *enable;
@property (readonly, nonatomic) long long defroster;
@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (void)setEnable:(id)a0;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setCarName:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithEnable:(id)a0 defroster:(long long)a1;
- (id)initWithEnable:(id)a0 defroster:(long long)a1 carName:(id)a2;
- (id)parametersByName;
- (void)setDefroster:(long long)a0;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
