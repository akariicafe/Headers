@class NSString, CNUIUserActionListModelCache, CNUIUserActionDisambiguationModeler;
@protocol CNSchedulerProvider, CNScheduler;

@interface CNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource> {
    unsigned long long _cacheCapacity;
    double _cacheEntryRefreshAge;
    double _cacheEntryExpirationAge;
}

@property (retain, nonatomic) CNUIUserActionListModelCache *models;
@property (retain, nonatomic) CNUIUserActionDisambiguationModeler *modeler;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNScheduler> resolutionScheduler;
@property (nonatomic) BOOL tracksChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)os_log;
+ (id)allActionTypes;
+ (id)allSupportedActionTypes;
+ (id)allSupportedActionTypesWithCapabilities:(id)a0;
+ (id)displayNameForDisambiguationForActionType:(id)a0;
+ (id)displayNameForButtonForActionType:(id)a0;
+ (BOOL)isSupportedActionType:(id)a0;
+ (id)makeCacheWithCapacity:(unsigned long long)a0 expirationAge:(double)a1 timeProvider:(id)a2;

- (void)setContactStore:(id)a0;
- (void)dealloc;
- (id)initWithSchedulerProvider:(id)a0;
- (void).cxx_destruct;
- (id)initWithDiscoveringEnvironment:(id)a0;
- (id)actionTypesForConsumer:(id)a0;
- (id)consumer:(id)a0 actionModelsForContact:(id)a1 actionType:(id)a2;
- (id)consumer:(id)a0 actionModelsForContact:(id)a1 actionType:(id)a2 handler:(id /* block */)a3;
- (id)consumer:(id)a0 currentActionModelForContact:(id)a1 actionType:(id)a2;
- (void)consumer:(id)a0 didSelectItem:(id)a1 forContact:(id)a2 actionType:(id)a3;
- (id)consumer:(id)a0 imageForActionType:(id)a1;
- (id)consumer:(id)a0 localizedButtonDisplayNameForActionType:(id)a1;
- (id)consumer:(id)a0 localizedDisplayNameForActionType:(id)a1;
- (id)consumer:(id)a0 localizedDisplayNameForButtonWithDefaultAction:(id)a1 actionType:(id)a2;
- (void)setCacheCapacity:(unsigned long long)a0;
- (void)setCacheEntryExpirationAge:(double)a0;
- (void)setCacheEntryRefreshAge:(double)a0;
- (id)thirdPartyActionsForContact:(id)a0 propertyKey:(id)a1 identifier:(id)a2;
- (id)thirdPartyActionsForContactProperty:(id)a0;
- (id)thirdPartyTargetsForActionTypes:(id)a0;
- (id)actionTypesToUpdateForSelectedItem:(id)a0;
- (id)initWithSchedulerProvider:(id)a0 idsAvailabilityProvider:(id)a1;
- (void)makeCacheAndTransferContents;
- (id)makeCacheWithCurrentSettings;
- (id)makeModelObservableForContact:(id)a0 actionType:(id)a1;
- (id)modelsForContact:(id)a0 actionType:(id)a1;
- (void)performFirstResolutionForEntry:(id)a0 contact:(id)a1 actionType:(id)a2;
- (void)refreshEntry:(id)a0 contact:(id)a1 actionType:(id)a2;
- (BOOL)shouldUseLabelForButtonWithDefaultAction:(id)a0;

@end
