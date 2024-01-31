@class NSString, NSMutableDictionary, DNDSAppSpecificSettingsManager, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DNDSAppConfigurationManager : NSObject <DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_predicates;
    DNDSAppSpecificSettingsManager *_appSpecificSettingsManager;
    NSHashTable *_delegates;
}

@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clearSystemActionWithIdentifier:(id)a0 modeIdentifier:(id)a1;
- (id)appActionForActionIdentifier:(id)a0 applicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)predicateForApplicationIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (id)targetContentIdentifierPrefixesForModeIdentifier:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)targetContentIdentifierPrefixForApplicationIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (id)appActionsForModeIdentifier:(id)a0 error:(id *)a1;
- (id)predicateForActionIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)setPredicate:(id)a0 forActionIdentifier:(id)a1 forApplicationIdentifier:(id)a2 modeIdentifier:(id)a3;
- (id)setSystemAction:(id)a0 modeIdentifier:(id)a1;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (void).cxx_destruct;
- (id)systemActionsForModeIdentifier:(id)a0 error:(id *)a1;
- (id)initWithAppSpecificSettingsManager:(id)a0;
- (id)clearAppActionWithIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2;
- (id)updateSystemActionWithReverseAction:(id)a0 actionIdentifier:(id)a1 modeIdentifier:(id)a2;
- (id)sysdiagnoseDataIdentifier;
- (id)systemActionForActionIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (void)invalidateAppContextForActionIdentifier:(id)a0 applicationIdentifier:(id)a1 modeIdentifier:(id)a2;
- (id)setTargetContentIdentifierPrefix:(id)a0 forActionIdentifier:(id)a1 forApplicationIdentifier:(id)a2 modeIdentifier:(id)a3;
- (id)setAppAction:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2;
- (void)refreshWithAvailableModes:(id)a0;

@end
