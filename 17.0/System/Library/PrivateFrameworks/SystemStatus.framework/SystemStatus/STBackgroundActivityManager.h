@class STBundleManager, NSSet, NSString, NSDictionary, NSHashTable, NSMutableSet, STSystemStatusDefaults;
@protocol BSDefaultObserver;

@interface STBackgroundActivityManager : NSObject <STBundleManagerObserver, BSDebugDescriptionProviding> {
    STBundleManager *_bundleManager;
    NSDictionary *_visualDescriptors;
    NSHashTable *_subscribedClients;
    NSMutableSet *_activeBackgroundActivities;
    STSystemStatusDefaults *_systemStatusDefaults;
    id<BSDefaultObserver> _internalDefaultsObserver;
    BOOL _allowAllBackgroundActivities;
}

@property (readonly, copy, nonatomic) NSSet *activeBackgroundActivities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)succinctDescriptionBuilder;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithDefaults:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (void)removeBackgroundActivityClient:(id)a0;
- (void)addBackgroundActivityClient:(id)a0;
- (id)resolvedBackgroundActivityFromBackgroundActivities:(id)a0 inPrecedenceScope:(unsigned long long)a1;
- (id)visualDescriptorForBackgroundActivityWithIdentifier:(id)a0;
- (void)_registerForInternalDefaultsChanges;
- (void)recordBundlesChangedForBundleManager:(id)a0;
- (id)validBackgroundActivitiesForBackgroundActivities:(id)a0;
- (void)addActiveBackgroundActivities:(id)a0;
- (void)removeActiveBackgroundActivities:(id)a0;
- (id)_allValidBackgroundActivitiesInPrecedenceScope:(unsigned long long)a0;
- (void)_forceResetBackgroundActivitiesForClients;
- (void)_updateBackgroundActivitiesForClients;
- (void)_updateSupportedBackgroundActivitiesAndVisualDescriptorsFromBundleRecords;

@end
