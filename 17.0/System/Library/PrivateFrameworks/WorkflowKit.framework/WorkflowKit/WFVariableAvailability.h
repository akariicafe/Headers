@class NSMapTable, NSHashTable, WFWorkflow, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface WFVariableAvailability : NSObject

@property (retain, nonatomic) NSMapTable *providingActionsByVariableName;
@property (retain, nonatomic) NSMapTable *variableScopeLevelsByGroupingIdentifier;
@property (retain, nonatomic) NSMapTable *variableScopeEndActionsByStartAction;
@property (retain, nonatomic) NSMapTable *actionOutputVariableActionsByUUID;
@property (retain, nonatomic) NSHashTable *actionsUsingShortcutInputVariable;
@property (retain, nonatomic) NSCache *cachedContentClassesForVariableNameAtIndex;
@property (retain, nonatomic) NSHashTable *variableObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic, getter=isShortcutInputVariableUsed) BOOL shortcutInputVariableUsed;

+ (BOOL)actionIsEligibleForOutputVariable:(id)a0;

- (void)invalidateCache;
- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (void)populateCache;
- (id)_possibleContentClassesForVariableNamed:(id)a0 atIndex:(unsigned long long)a1 context:(id)a2 excludingAction:(id)a3;
- (void)actionDidChange:(id)a0 moved:(BOOL)a1 removed:(BOOL)a2;
- (id)actionProvidingVariableWithOutputUUID:(id)a0;
- (void)actionsDidMove;
- (id)actionsProvidingVariableName:(id)a0 atIndex:(unsigned long long)a1;
- (void)addVariableObserver:(id)a0;
- (BOOL)areActionOutputVariablesAvailableAtIndex:(unsigned long long)a0;
- (BOOL)areVariablesAvailableAtIndex:(unsigned long long)a0;
- (id)availableOutputActionsAtIndex:(unsigned long long)a0;
- (id)availableVariableNamesAtIndex:(unsigned long long)a0;
- (id)availableVariableNamesExcludingThoseProvidedByAction:(id)a0;
- (void)enumerateActionsInScopeAtIndex:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)invalidateActionOutputProviderCache;
- (void)invalidateActionsUsingShortcutInputVariableCache;
- (void)invalidateContentClassCache;
- (BOOL)isVariableAvailableAtIndex:(unsigned long long)a0 withActionTest:(id /* block */)a1;
- (BOOL)isVariableWithName:(id)a0 availableAtIndex:(unsigned long long)a1;
- (BOOL)isVariableWithOutputUUIDAvailable:(id)a0 atIndex:(unsigned long long)a1;
- (void)notifyContentClassesChanged;
- (void)notifyVariablesChanged;
- (void)populateActionOutputVariableActionsByUUID;
- (void)populateActionsUsingShortcutInputVariableCache;
- (id)possibleContentClassesForVariableNamed:(id)a0 atIndex:(unsigned long long)a1 context:(id)a2 excludingAction:(id)a3;
- (void)removeVariableObserver:(id)a0;
- (void)renameVariable:(id)a0 to:(id)a1 fromAction:(id)a2;
- (void)updateShortcutInputVariableUsageForChangeInAction:(id)a0 removed:(BOOL)a1;
- (unsigned long long)variableScopeLevelForGroupingIdentifier:(id)a0;

@end
