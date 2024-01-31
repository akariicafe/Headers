@class NSArray, NSString, INMediaSearch, INPrivateUpdateMediaAffinityIntentData;

@interface INUpdateMediaAffinityIntent : INIntent <INUpdateMediaAffinityIntentExport>

@property (readonly, copy, nonatomic) NSArray *mediaItems;
@property (readonly, copy, nonatomic) INMediaSearch *mediaSearch;
@property (readonly, nonatomic) long long affinityType;
@property (copy, nonatomic) INPrivateUpdateMediaAffinityIntentData *privateUpdateMediaAffinityIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setMediaSearch:(id)a0;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithMediaItems:(id)a0 mediaSearch:(id)a1 affinityType:(long long)a2;
- (id)parametersByName;
- (void)setAffinityType:(long long)a0;
- (void)setMediaItems:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
