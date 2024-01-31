@class NSString;

@interface HMDHAPMediaProfile : HMDMediaProfile

@property long long airPlayEnable;
@property (readonly) NSString *clientIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)registerForNotifications;
- (unsigned long long)capability;
- (void)_updateCurrentMediaState:(id)a0 volumePercentage:(id)a1 muted:(id)a2 enable:(id)a3 message:(id)a4;
- (id)_allCharacteristicsToMonitor;
- (void)_disableCharacteristicNotifications;
- (void)_handleCharacteristicChanges:(id)a0;
- (id)_mediaSessionStateFromProfile;
- (void)_notifyProfileSettingsUpdated:(id)a0;
- (void)_setCharacteristicNotifications:(BOOL)a0;
- (id)_smartSpeakerAirPlayEnableCharacteristic;
- (id)_smartSpeakerAirPlayEnableReadRequest;
- (id)_smartSpeakerCurrentMediaStateCharacteristic;
- (id)_smartSpeakerCurrentMediaStateReadRequest;
- (id)_smartSpeakerMutedCharacteristic;
- (id)_smartSpeakerMutedReadRequest;
- (id)_smartSpeakerMutedWriteRequestWithMuted:(id)a0;
- (id)_smartSpeakerService;
- (id)_smartSpeakerTargetMediaStateCharacteristic;
- (id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)a0;
- (id)_smartSpeakerVolumeCharacteristic;
- (id)_smartSpeakerVolumeReadRequest;
- (id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)a0;
- (BOOL)_updateAudioControl:(id)a0;
- (void)_updateCharacteristicChanges;
- (BOOL)_updatePlayback:(id)a0;
- (BOOL)_updateRefreshPlayback:(id)a0;
- (void)handleAccessoryConfigured:(id)a0;
- (void)handleCharacteristicsUpdated:(id)a0;
- (void)handleHomeCharacteristicValuesChanged:(id)a0;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)handleResidentAdded:(id)a0;
- (id)initWithMediaServices:(id)a0;
- (id)mediaSessionFromProfile;
- (id)playStateWriteRequestWithPlaybackState:(long long)a0;
- (void)setEnable:(long long)a0 completionHandler:(id /* block */)a1;
- (void)updateMediaSessionState:(id)a0 usingCharacteristics:(id)a1;
- (void)updateMediaSessionState:(id)a0 usingServices:(id)a1;
- (id)volumeWriteRequestWithVolumePercentage:(id)a0;

@end
