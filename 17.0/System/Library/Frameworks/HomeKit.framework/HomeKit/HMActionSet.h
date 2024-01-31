@class NSUUID, NSString, HMHome, NSDate, NSSet, HMMutableArray, NSDictionary, HMApplicationData, _HMContext, NSObject;
@protocol OS_dispatch_queue;

@interface HMActionSet : NSObject <HMActionSetConfiguration, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMApplicationData *_applicationData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDictionary *shortcutsDictionaryRepresentation;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic) BOOL executionInProgress;
@property (readonly, nonatomic) HMMutableArray *currentActions;
@property (readonly, copy, nonatomic) NSSet *actions;
@property (readonly, nonatomic, getter=isExecuting) BOOL executing;
@property (readonly, copy, nonatomic) NSString *actionSetType;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSDate *lastExecutionDate;
@property (readonly, nonatomic) HMApplicationData *applicationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSUUID *applicationDataIdentifier;

+ (id)actionSetFromProtoBuf:(id)a0 home:(id)a1;
+ (id)allowedActionClasses;
+ (BOOL)isBuiltinActionSetType:(id)a0;
+ (id)shortcutsComponentActionSet;
+ (id)shortcutsComponentActionSetWithHome:(id)a0 actions:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)_unconfigure;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setApplicationData:(id)a0;
- (void)removeAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetNameWithCompletionHandler:(id /* block */)a0;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_addAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_doAddAction:(id)a0 uuid:(id)a1;
- (BOOL)_doRemoveActionWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_handleActionRemovedFromPayload:(id)a0 completion:(id /* block */)a1;
- (void)_handleActionSetExecutedNotification:(id)a0;
- (BOOL)_handleActionSetRenameFromPayload:(id)a0 completion:(id /* block */)a1;
- (void)_handleActionSetStartExecutionNotification:(id)a0;
- (BOOL)_handleActionUpdatedFromResponse:(id)a0 completion:(id /* block */)a1;
- (void)_recomputeAssistantIdentifier;
- (void)_registerNotificationHandlers;
- (void)_removeAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_unconfigureContext;
- (void)_updateAction:(id)a0 changes:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)addAction:(id)a0 completionHandler:(id /* block */)a1;
- (id)copyAsBuilder;
- (id)encodeAsProtoBuf;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (id)initWithName:(id)a0 type:(id)a1 uuid:(id)a2;
- (id)initWithShortcutsDictionaryRepresentation:(id)a0 home:(id)a1;
- (BOOL)mergeFromNewObject:(id)a0;
- (BOOL)mergeFromNewObjectForBuilderUpdates:(id)a0;
- (void)recomputeAssistantIdentifier;
- (BOOL)requiresDeviceUnlock;
- (void)setLastExecutionDate:(id)a0;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateWithBuilder:(id)a0 completionHandler:(id /* block */)a1;

@end
