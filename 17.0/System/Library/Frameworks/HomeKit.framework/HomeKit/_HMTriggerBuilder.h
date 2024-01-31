@class HMActionSetBuilder, NSString, NSArray, NSUUID, HMHome, NSMutableArray, HMTriggerPolicy;

@interface _HMTriggerBuilder : _HMAutomationBuilder <HMTriggerBuilderInternal> {
    NSString *_name;
    BOOL _nameIsConfigured;
    BOOL _enabled;
    HMTriggerPolicy *_policy;
    NSMutableArray *_actionSets;
}

@property (retain, nonatomic) HMTriggerPolicy *policy;
@property (readonly, nonatomic) BOOL nameIsConfigured;
@property (readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *configuredName;

+ (void)initialize;

- (id)creatorDevice;
- (id)creator;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (Class)class;
- (void)addActionSet:(id)a0 completionHandler:(id /* block */)a1;
- (void)updatePolicy:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePolicy:(id)a0 completionHandler:(id /* block */)a1;
- (void)addActionSet:(id)a0;
- (void)addActionSetOfType:(id)a0 completionHandler:(id /* block */)a1;
- (void)addActionSetWithCompletionHandler:(id /* block */)a0;
- (void)enable:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithContext:(id)a0 home:(id)a1;
- (id)lastFireDate;
- (void)removeActionSet:(id)a0;
- (void)removeActionSet:(id)a0 completionHandler:(id /* block */)a1;
- (void)setName:(id)a0 isConfigured:(BOOL)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 configuredName:(id)a1 completionHandler:(id /* block */)a2;

@end
