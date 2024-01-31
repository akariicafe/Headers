@class INIntent, NSArray, INContactEventTrigger, INSpatialEventTrigger, INTaskList, INTemporalEventTrigger, NSString;

@interface INAddTasksIntent : INIntent <INAddTasksIntentExport>

@property (copy, nonatomic) NSArray *contactEventTriggers;
@property (readonly, copy, nonatomic) INTaskList *targetTaskList;
@property (readonly, copy, nonatomic) NSArray *taskTitles;
@property (readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) long long priority;
@property (nonatomic) long long taskReference;
@property (copy, nonatomic) NSArray *targetTaskListMembers;
@property (copy, nonatomic) INContactEventTrigger *contactEventTrigger;
@property (copy, nonatomic) INIntent *intent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (void)setPriority:(long long)a0;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_redactedDictionaryRepresentation;
- (id)_typedBackingStore;
- (id)initWithTargetTaskList:(id)a0 taskTitles:(id)a1 spatialEventTrigger:(id)a2 temporalEventTrigger:(id)a3;
- (id)initWithTargetTaskList:(id)a0 taskTitles:(id)a1 spatialEventTrigger:(id)a2 temporalEventTrigger:(id)a3 priority:(long long)a4;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setSpatialEventTrigger:(id)a0;
- (void)setTargetTaskList:(id)a0;
- (void)setTaskTitles:(id)a0;
- (void)setTemporalEventTrigger:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
