@class NSMutableArray, NSString, NSSet, NSUUID, HMApplicationData, HMHome;

@interface _HMActionSetBuilder : _HMAutomationBuilder <HMActionSetBuilderInternal> {
    NSString *_type;
    NSString *_name;
    NSMutableArray *_actions;
    HMApplicationData *_applicationData;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *actions;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *actionSetType;
@property (readonly, nonatomic) HMApplicationData *applicationData;

+ (void)initialize;

- (BOOL)isExecuting;
- (void)addAction:(id)a0;
- (void).cxx_destruct;
- (Class)class;
- (void)removeAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)addAction:(id)a0 completionHandler:(id /* block */)a1;
- (id)copyAsBuilder;
- (id)initWithActionSet:(id)a0;
- (id)initWithType:(id)a0 context:(id)a1 home:(id)a2;
- (id)lastExecutionDate;
- (void)removeAction:(id)a0;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;

@end
