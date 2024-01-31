@class INSpeakableString, NSString, INSettingMetadata;

@interface INOpenSettingIntent : INIntent <INOpenSettingIntentExport>

@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly, copy, nonatomic) INSpeakableString *searchQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (void)setSearchQuery:(id)a0;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithSettingMetadata:(id)a0 searchQuery:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setSettingMetadata:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
