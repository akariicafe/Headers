@class NSDate, NSString, NSArray, PLEntry, PLEntryNotificationOperatorComposition, NSMutableArray, NSDictionary, PLXPCListenerOperatorComposition, AudioDevice, PLNSNotificationOperatorComposition;

@interface PLAudioAgent : PLAgent

@property int accessoryPowerState;
@property (readonly) NSMutableArray *nsOutputNotifications;
@property (readonly) NSMutableArray *nsRoutingNotifications;
@property (retain) PLEntryNotificationOperatorComposition *accessoryPowerCallback;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property (retain) PLXPCListenerOperatorComposition *audioAppXPCListener;
@property (retain) PLXPCListenerOperatorComposition *screenMirroringXPCListener;
@property (retain) PLXPCListenerOperatorComposition *speakerAmpXPCListener;
@property (retain) PLXPCListenerOperatorComposition *hapticsXPCListener;
@property (retain) PLXPCListenerOperatorComposition *hapticsAssertionXPCListener;
@property (retain) PLXPCListenerOperatorComposition *hapticsRunningCountListener;
@property (retain) PLXPCListenerOperatorComposition *RMSLoggingXPCListener;
@property (retain) PLXPCListenerOperatorComposition *CoreAudioVADXPCListener;
@property (retain) PLXPCListenerOperatorComposition *shazamRecordingXPCListener;
@property (retain) PLXPCListenerOperatorComposition *mutedTalkerDetectionXPCListener;
@property (retain) PLEntry *entryRoutingOld;
@property BOOL audioIsActive;
@property (retain) NSArray *activePIDs;
@property BOOL headsetIsPlayingAudio;
@property BOOL speakerIsPlayingAudio;
@property double currentVolume;
@property (readonly) NSString *audioHardware;
@property (readonly) NSDictionary *audioPowerModel;
@property (retain) NSDate *lastAudioStateChangeDate;
@property (retain, nonatomic) AudioDevice *defaultOutputDevice;
@property (retain, nonatomic) AudioDevice *defaultInputDevice;
@property (copy, nonatomic) id /* block */ defaultOutputDeviceHandlerBlock;
@property (copy, nonatomic) id /* block */ defaultInputDeviceHandlerBlock;

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionHaptics;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionCoreAudioVAD;
+ (id)entryEventForwardDefinitionRouting;
+ (id)entryEventForwardDefinitionHapticsRunningCount;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionMutedTalkerDetection;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitionRMSLogging;
+ (id)entryEventForwardDefinitionNowPlaying;
+ (id)entryEventPointDefinitionHapticsAssertion;
+ (id)entryEventPointDefinitionSpeakerAmp;
+ (id)entryEventIntervalDefinitionShazamRecording;
+ (id)entryEventPointDefinitionAudioApp;
+ (id)entryEventForwardDefinitionOutput;
+ (id)entryEventForwardDefinitionAudioDevice;

- (BOOL)muted;
- (void)logEventForwardMutedTalkerDetection:(id)a0;
- (id)init;
- (id)BTEndpointType;
- (double)modelAudioPowerWithVolume:(double)a0;
- (void)logEventPointAudioApp:(id)a0;
- (void)log;
- (void)logEventIntervalRMSLogging:(id)a0;
- (void)initOperatorDependancies;
- (void)handleNowPlayingApplicationIsPlayingDidChange:(id)a0;
- (void)handleLightningStatusCallback:(id)a0;
- (id)outputCategory;
- (void)logEventPointSpeakerAmp:(id)a0;
- (BOOL)initDefaultAudioDevice:(BOOL)a0;
- (void)createBluetoothAccountingEvents:(id)a0;
- (void)createAudioAccountingEvents:(id)a0;
- (id)volume;
- (void)addDefaultAudioDeviceListener:(BOOL)a0;
- (void)closeAudioAccountingEvents;
- (id)nowPlayingAppBundleID:(id)a0;
- (void)logEventForwardRouting;
- (void)createCarPlayAccountingEvents:(id)a0;
- (void)modelAudioPowerSpeaker:(id)a0;
- (void).cxx_destruct;
- (double)audioPowerForRoute:(id)a0 forVolume:(double)a1;
- (id)returnVolumeOrOutPutCategory:(int)a0;
- (double)convertSpeakerProtectionModeledPowerToTotalSpeakerPower:(double)a0;
- (void)createAirPlayAccountingEvents:(id)a0;
- (void)modelAudioPowerCodec:(id)a0;
- (BOOL)headphonesConnected;
- (void)logEventForwardAudioDevice:(id)a0;
- (void)modelAudioPower;
- (void)logEventPointHapticsAssertion:(id)a0;
- (void)logEventIntervalShazamRecording:(id)a0;
- (void)logEventForwardHapticsRunningCount:(id)a0;
- (void)setupAVSystemController;
- (id)buildCallBack:(id)a0 withGroup:(BOOL)a1 withHandler:(id /* block */)a2;
- (id)activeRoute;
- (void)logEventIntervalCoreAudioVAD:(id)a0;
- (BOOL)shouldModelAudioPowerSpeakerTemp;
- (BOOL)headsetHasInput;
- (void)logEventForwardOutput;
- (void)logEventPointHaptics:(id)a0;

@end
