@class HMDCameraRecordingSupportedAudioConfiguration, NSObject, NSDictionary, NSMutableArray, HMDService, NSString, HMDCharacteristic, HMDHAPAccessory, HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingSelectedConfiguration, NSArray, HMDCameraRecordingSupportedVideoConfiguration, NSNotificationCenter;
@protocol OS_dispatch_queue, HMDCameraRecordingSettingsControlDelegate;

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging>

@property (class, readonly) NSArray *audioConfigurationsByPreferenceOrder;

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDService *recordingService;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSArray *videoConfigurationsByPreferenceOrder;
@property (readonly) NSMutableArray *pendingConfigureCompletionHandlers;
@property (readonly) HMDCharacteristic *recordingActiveCharacteristic;
@property (readonly) HMDCharacteristic *recordingSelectedConfigurationCharacteristic;
@property BOOL canUseCachedCharacteristicValues;
@property (retain) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration;
@property (retain) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration;
@property (retain) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration;
@property (retain) HMDCameraRecordingSelectedConfiguration *currentSelectedConfiguration;
@property (retain) NSDictionary *recordingConfigurationOverrides;
@property (readonly, getter=isCameraConfiguredForRecording) BOOL cameraConfiguredForRecording;
@property (weak) id<HMDCameraRecordingSettingsControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)audioBitRateForCodecConfiguration:(id)a0;
+ (id)audioCodecForCodecConfiguration:(id)a0;
+ (id)h264ProfileForCodecConfiguration:(id)a0;
+ (BOOL)isSupportedAudioCodec:(id)a0;
+ (BOOL)isSupportedH264Profile:(id)a0;
+ (BOOL)isSupportedVideoCodec:(id)a0;
+ (id)videoCodecForCodecConfiguration:(id)a0;

- (void)dealloc;
- (void)start;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)_dataValueForCharacteristicOfType:(id)a0 inResponses:(id)a1;
- (id)_generalRecordingConfigurationInResponses:(id)a0;
- (void)_handleCurrentIsRecordingActive:(id)a0 selectedConfiguration:(id)a1;
- (void)_handleSupportedConfigurationCharacteristicsReadResponses:(id)a0;
- (void)_invokePendingConfigureCompletionHandlersWithError:(id)a0;
- (void)_invokePendingConfigureCompletionHandlersWithSelectedConfiguration:(id)a0;
- (void)_invokePendingConfigureCompletionHandlersWithSelectedConfiguration:(id)a0 error:(id)a1;
- (id)_isRecordingActiveValueInResponses:(id)a0;
- (id)_numberValueForCharacteristicOfType:(id)a0 inResponses:(id)a1;
- (id)_preferredAudioConfigurationOverride;
- (id)_preferredVideoConfigurationOverride;
- (void)_readCameraRecordingSettings;
- (void)_readSupportedCameraRecordingConfiguration;
- (id)_recordingAudioConfiguration;
- (id)_recordingGeneralConfiguration;
- (id)_recordingVideoConfiguration;
- (id)_selectedRecordingConfigurationInResponses:(id)a0;
- (void)_setSelectedRecordingConfiguration:(id)a0;
- (id)_supportedAudioConfigurationInResponses:(id)a0;
- (id)_supportedVideoConfigurationInResponses:(id)a0;
- (void)_updateSelectedRecordingConfiguration:(id)a0;
- (void)_writeCameraRecordingSettings;
- (id)characteristicsToMonitor;
- (void)configureCameraRecordingSettings;
- (void)configureCameraRecordingSettingsWithCompletion:(id /* block */)a0;
- (void)enableCharacteristicNotifications;
- (void)handleAccessoryConnectedNotification:(id)a0;
- (void)handleAccessoryDisconnectedNotification:(id)a0;
- (void)handleAccessoryIsNotConfiguredError;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (void)handleCharacteristicsUpdatedNotification:(id)a0;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)a0;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1 recordingManagementService:(id)a2;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1 recordingManagementService:(id)a2 notificationCenter:(id)a3;
- (void)reconfigureCameraRecordingSettingsWithReason:(id)a0;

@end
