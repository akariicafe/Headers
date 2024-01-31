@class NSHashTable, NSSet, NSArray, NSString, NSMutableDictionary, NSObject, CCSModuleRepository;
@protocol OS_dispatch_queue, CCUIControlCenterSystemAgent, CCUIContentModuleContextDelegate;

@interface CCUIModuleInstanceManager : NSObject <CCSModuleRepositoryObserver, CCUIContentModuleContextDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id<CCUIControlCenterSystemAgent> _systemAgent;
    CCSModuleRepository *_repository;
    NSMutableDictionary *_moduleInstanceByIdentifier;
    NSHashTable *_observers;
}

@property (weak, nonatomic) id<CCUIContentModuleContextDelegate> contextDelegate;
@property (copy, nonatomic) NSSet *enabledModuleIdentifiers;
@property (readonly, nonatomic) NSArray *moduleInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;
+ (void)setupSharedInstanceWithSystemAgent:(id)a0;

- (struct CCUIModuleLayoutSize { unsigned long long x0; unsigned long long x1; })moduleLayoutSizeForContentModuleContext:(id)a0 forOrientation:(long long)a1;
- (void)contentModuleContext:(id)a0 didUpdateHomeGestureDismissalAllowed:(BOOL)a1;
- (id)_initWithSystemAgent:(id)a0 repository:(id)a1;
- (void)removeObserver:(id)a0;
- (void)loadableModulesChangedForModuleRepository:(id)a0;
- (id)contentModuleContext:(id)a0 requestsSensorActivityDataForActiveSensorType:(unsigned long long)a1;
- (void)dismissControlCenterForContentModuleContext:(id)a0;
- (void)requestExpandModuleForContentModuleContext:(id)a0;
- (id)_loadBundlesForModuleMetadata:(id)a0;
- (void)_updateModuleInstances;
- (void)dismissExpandedViewForContentModuleContext:(id)a0;
- (void)requestModuleLayoutSizeUpdateForContentModuleContext:(id)a0;
- (void).cxx_destruct;
- (id)_instantiateModuleWithMetadata:(id)a0;
- (void)_loadBundlesForModuleMetadata:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_runBlockOnObservers:(id /* block */)a0;
- (id)moduleInstances;
- (BOOL)loadModuleWithBundleIdentifier:(id)a0;
- (void)addObserver:(id)a0;
- (void)contentModuleContext:(id)a0 enqueueStatusUpdate:(id)a1;

@end
