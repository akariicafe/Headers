@class NSArray, INModifyRelationship, NSString;

@interface INSetRelationshipIntent : INIntent <INSetRelationshipIntentExport>

@property (readonly, copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, copy, nonatomic) INModifyRelationship *targetRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setContactIdentifiers:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithContactIdentifiers:(id)a0 targetRelationship:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setTargetRelationship:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
