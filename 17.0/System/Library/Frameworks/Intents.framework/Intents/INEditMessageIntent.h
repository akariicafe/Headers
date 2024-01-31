@class NSString;

@interface INEditMessageIntent : INIntent <INEditMessageIntentExport>

@property (readonly, copy, nonatomic) NSString *messageIdentifier;
@property (readonly, copy, nonatomic) NSString *editedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setMessageIdentifier:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithMessageIdentifier:(id)a0 editedContent:(id)a1;
- (id)parametersByName;
- (void)setEditedContent:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
