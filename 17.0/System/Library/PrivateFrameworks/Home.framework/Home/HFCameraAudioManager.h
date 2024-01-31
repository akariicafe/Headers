@class HMCameraStream, HFCharacteristicValueManager, HMCameraProfile;

@interface HFCameraAudioManager : NSObject

@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) HMCameraStream *cameraStream;
@property (retain, nonatomic) HFCharacteristicValueManager *valueManager;
@property (readonly, nonatomic) unsigned long long audioStreamSetting;
@property (readonly, nonatomic, getter=isOutgoingAudioEnabled) BOOL outgoingAudioEnabled;
@property (readonly, nonatomic, getter=isIncomingAudioEnabled) BOOL incomingAudioEnabled;
@property (readonly, nonatomic) float incomingAudioVolume;

- (void).cxx_destruct;
- (id)_writeValuesForCharacteristics:(id)a0;
- (id)_enableAudioIfNecessaryForAudioControl:(id)a0 minVolume:(float)a1;
- (id)_readValuesForCharacteristics:(id)a0;
- (id)enableRemoteMicrophoneIfNecessary;
- (id)enableRemoteSpeakerIfNecessary;
- (id)initWithCameraProfile:(id)a0 cameraStream:(id)a1 valueManager:(id)a2;
- (id)setIncomingAudioEnabled:(BOOL)a0;
- (id)setIncomingAudioVolume:(float)a0;
- (id)setOutgoingAudioEnabled:(BOOL)a0;
- (id)updateAudioStreamSetting:(unsigned long long)a0;

@end
