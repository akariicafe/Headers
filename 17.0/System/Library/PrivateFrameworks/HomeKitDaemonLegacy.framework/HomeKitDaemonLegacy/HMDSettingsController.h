@class NSArray, NSString, NSUUID, HMDSettingGroup, NSMapTable;
@protocol HMDSettingsControllerDelegate, HMDSettingsMessageHandlerProtocol, HMDSettingsControllerDependency;

@interface HMDSettingsController : HMFObject <HMFLogging, HMDSettingsControllerProtocol, HMDSettingsMessageController, HMDSettingTransactionReceiverProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isInitialized;
    id<HMDSettingsMessageHandlerProtocol> _messageHandler;
    id<HMDSettingsControllerDependency> _dependency;
    id<HMDSettingsControllerDelegate> _delegate;
    HMDSettingGroup *_rootGroup;
    NSMapTable *_groupsMap;
    NSMapTable *_settingsMap;
}

@property (readonly) NSArray *allObjectIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSUUID *userUUID;

+ (id)logCategory;

- (void)configure;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)settingForKeyPath:(id)a0;
- (void)loadWithModels:(id)a0;
- (id)_prunedSettingsGroupByRemovingKeyPathsFromGroup:(id)a0;
- (id)initWithDependency:(id)a0 delegate:(id)a1;
- (id)migrateSettingsTransactionWithTransaction:(id)a0 error:(id *)a1;
- (id)modelsToMakeSettings;
- (id)modelsToMigrateSettings;
- (id)settingValuesByKeyPathWithPrefix:(id)a0;
- (void)transactionSettingConstraintModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)transactionSettingConstraintModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)transactionSettingGroupModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)transactionSettingGroupModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)transactionSettingModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)transactionSettingModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)updateRootGroup:(id)a0;
- (void)updateWithEncodedValue:(id)a0 onSettingKeyPath:(id)a1 completion:(id /* block */)a2;
- (void)updateWithValue:(id)a0 onSetting:(id)a1 completion:(id /* block */)a2;

@end
