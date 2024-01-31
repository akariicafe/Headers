@class HMAccessorySettingsController, HMSymptomsHandler, HMMediaSession, HMAccessorySettings, HMAccessorySettingsAdapter, HMHome, NSObject, HMAccessoryCategory, HMMediaDestination, HMMutableArray, NSString, HMApplicationData, HMAccessorySettingsDataSource, NSArray, _HMContext, NSUUID;
@protocol HMMediaSystemDelegate, OS_dispatch_queue;

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, HMAccessorySettingsAdapterDelegate, HMControllable, HMMediaDestinationInternal, HMAccessorySettingsContainerInternal, HMObjectMerge, NSSecureCoding, HMAccessorySettingsContainer, HMApplicationData, HMMediaDestination, HMMediaObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMHome *home;
@property (retain, nonatomic) HMAccessorySettingsDataSource *accessorySettingsDataSource;
@property (retain, nonatomic) HMAccessorySettingsController *accessorySettingsController;
@property (retain, nonatomic) HMAccessorySettingsAdapter *mediaSystemSettingsAdapter;
@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMMutableArray *componentsArray;
@property (retain, nonatomic) HMApplicationData *applicationData;
@property (retain) HMMediaDestination *audioDestination;
@property (readonly, nonatomic) BOOL supportsMessagedHomepodSettings;
@property (weak) id<HMMediaSystemDelegate> delegate;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *configuredName;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic, getter=isCompatible) BOOL compatible;
@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) HMAccessoryCategory *category;
@property (readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, getter=isControllable) BOOL controllable;
@property (readonly, copy) NSArray *audioDestinationMediaProfiles;
@property (readonly, copy) NSString *audioDestinationParentIdentifier;
@property (readonly, copy) NSUUID *audioDestinationGroupIdentifier;
@property (readonly, copy) NSString *audioDestinationIdentifier;
@property (readonly, copy) NSString *audioDestinationName;
@property (readonly) long long audioDestinationType;
@property (readonly) BOOL supportsAudioDestination;
@property (readonly) BOOL supportsAudioGroup;
@property (readonly, weak) NSUUID *containerUUID;
@property (readonly, weak) HMHome *containerHome;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (readonly) HMAccessorySettings *settings;

+ (id)logCategory;
+ (id)mediaSystemWithDictionary:(id)a0 home:(id)a1;

- (void)setSettings:(id)a0;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_unconfigure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_handleRootSettingsUpdated:(id)a0;
- (void)_handleSystemUpdatedNotification:(id)a0;
- (BOOL)_mergeApplicationDataWithNewMediaSystem:(id)a0;
- (BOOL)_mergeComponentsWithNewMediaSystem:(id)a0;
- (BOOL)_mergeLegacySettingsWithNewMediaSystem:(id)a0;
- (BOOL)_mergeNameWithNewMediaSystem:(id)a0;
- (BOOL)_mergeSettingsWithNewMediaSystem:(id)a0;
- (BOOL)_mergeWithNewMediaSystem:(id)a0 isFromSerializedData:(BOOL)a1;
- (void)_registerNotificationHandlers;
- (void)_unconfigureContext;
- (void)_updateAccessoryReference;
- (void)_updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)adapter:(id)a0 didUpdatePreferredMediaUserUUIDString:(id)a1 selectionType:(unsigned long long)a2;
- (void)adapter:(id)a0 didUpdateSettingKeyPaths:(id)a1;
- (void)adapter:(id)a0 didUpdateSettings:(id)a1;
- (void)callCompletionHandler:(id /* block */)a0;
- (void)callCompletionHandler:(id /* block */)a0 error:(id)a1;
- (BOOL)configureSettingsAdaptorIfNeeded;
- (id)initWithHome:(id)a0 uuid:(id)a1 name:(id)a2 configuredName:(id)a3 compatible:(BOOL)a4 components:(id)a5 settings:(id)a6;
- (BOOL)mergeAudioDestinationWithNewMediaSystem:(id)a0;
- (BOOL)mergeFromNewObject:(id)a0;
- (BOOL)mergeFromNewObject:(id)a0 isFromSerializedData:(BOOL)a1;
- (BOOL)mergeSupportsMessagedHomepodSettingsWithNewMediaSystem:(id)a0;
- (void)notifyDelegateOfUpdatedApplicationData:(id)a0;
- (void)notifyDelegateOfUpdatedAudioDestination;
- (void)notifyDelegateOfUpdatedComponents:(id)a0;
- (void)notifyDelegateOfUpdatedConfiguredName:(id)a0;
- (void)notifyDelegateOfUpdatedMediaSession:(id)a0;
- (void)notifyDelegateOfUpdatedName:(id)a0;
- (void)notifyDelegateOfUpdatedSettings:(id)a0;
- (void)postConfigure;
- (void)setConfiguredName:(id)a0;
- (id)targetAccessoryIdentifierBySerial;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateAudioDestinationSupportedOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateComponentsSettingsAdapterToSettingReflected;
- (void)updateMediaSession:(id)a0 forMediaProfile:(id)a1;
- (void)updateSettingWithKeyPath:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;

@end
