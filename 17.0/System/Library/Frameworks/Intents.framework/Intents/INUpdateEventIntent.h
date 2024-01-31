@class NSString, NSArray, CLPlacemark, NSNumber, INDateComponentsRange;

@interface INUpdateEventIntent : INIntent <INUpdateEventIntentExport>

@property (readonly, copy, nonatomic) NSString *targetEventIdentifier;
@property (readonly, copy, nonatomic) NSString *setTitle;
@property (readonly, copy, nonatomic) INDateComponentsRange *setDateTimeRange;
@property (readonly, copy, nonatomic) CLPlacemark *setLocation;
@property (readonly, copy, nonatomic) NSArray *addParticipants;
@property (readonly, copy, nonatomic) NSArray *removeParticipants;
@property (readonly, copy, nonatomic) NSNumber *updateAllOccurrences;
@property (readonly, copy, nonatomic) NSNumber *removeLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setSetLocation:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithTargetEventIdentifier:(id)a0 setTitle:(id)a1 setDateTimeRange:(id)a2 setLocation:(id)a3 addParticipants:(id)a4 removeParticipants:(id)a5 updateAllOccurrences:(id)a6 removeLocation:(id)a7;
- (id)parametersByName;
- (void)setAddParticipants:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setRemoveLocation:(id)a0;
- (void)setRemoveParticipants:(id)a0;
- (void)setSetDateTimeRange:(id)a0;
- (void)setSetTitle:(id)a0;
- (void)setTargetEventIdentifier:(id)a0;
- (void)setUpdateAllOccurrences:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
