@class HMDSettingsMessageHandler, NSString, NSArray, NSUUID, HMFMessageDispatcher, NSObject;
@protocol HMDSettingsBackingStoreController, HMDUserSettingsInitialValueProviding, OS_dispatch_queue, HMDSettingTransactionReceiverProtocol, HMDSettingsMetadataParserProtocol, HMDSettingsMessageHandlerProtocol;

@interface HMDSettingsControllerDependency : NSObject <HMDSettingsControllerDependency> {
    id<HMDSettingsBackingStoreController> _backingStoreController;
    NSString *_metadataFileName;
    NSObject<OS_dispatch_queue> *_queue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDSettingsMessageHandler<HMDSettingsMessageHandlerProtocol> *_internalMessageHandler;
}

@property (readonly) id<HMDSettingsMetadataParserProtocol> metadataParser;
@property (readonly) id<HMDSettingsMessageHandlerProtocol> messageHandler;
@property (weak) id<HMDSettingTransactionReceiverProtocol> transactionReceiver;
@property (readonly) id<HMDSettingsBackingStoreController> backingStoreController;
@property (readonly) NSString *codingKey;
@property (readonly, weak) id<HMDUserSettingsInitialValueProviding> migrationProvider;
@property (readonly, copy) NSArray *keyPathsToPrune;
@property (readonly) NSUUID *parentIdentifier;
@property (readonly) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadMetadata;
- (void).cxx_destruct;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1 backingStoreController:(id)a2;
- (id)createSettingGroupModelWithName:(id)a0 parent:(id)a1;
- (id)createSettingModelWithName:(id)a0 parent:(id)a1 type:(id)a2 properties:(id)a3;
- (id)createSettingRootGroupModelWithParentModelID:(id)a0;
- (id)initWithParentUUID:(id)a0 logName:(id)a1 queue:(id)a2 metadataFileName:(id)a3 codingKey:(id)a4 messageHandler:(id)a5 migrationProvider:(id)a6;
- (id)initWithParentUUID:(id)a0 logName:(id)a1 queue:(id)a2 metadataFileName:(id)a3 codingKey:(id)a4 messageHandler:(id)a5 migrationProvider:(id)a6 keyPathsToPrune:(id)a7;
- (id)settingModelForUpdateWithIdentifier:(id)a0 parentIdentifier:(id)a1 value:(id)a2;
- (id)settingValueForValue:(id)a0 type:(id)a1 constraintModels:(id)a2 error:(id *)a3;

@end
