@class NSString;

@interface INPlayAnnouncementSoundIntent : INIntent <INPlayAnnouncementSoundIntentExport>

@property (readonly, nonatomic) long long soundType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (void)setSoundType:(long long)a0;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithSoundType:(long long)a0;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
