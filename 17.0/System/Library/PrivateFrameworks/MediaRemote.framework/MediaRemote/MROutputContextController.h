@class NSMutableDictionary, MRAVOutputDevice, MRAVOutputContext, NSObject;
@protocol OS_dispatch_queue;

@interface MROutputContextController : MROutputContextDataSource {
    MRAVOutputContext *_outputContext;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _groupVolumeMuted;
    BOOL _localVolumeInitialized;
    BOOL _localVolumeControlCapabilitiesInitialized;
    BOOL _localVolumeMutedInitialized;
    NSMutableDictionary *_outputDeviceVolume;
    NSMutableDictionary *_outputDeviceVolumeMuted;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) float localVolume;
@property (nonatomic) unsigned int localVolumeControlCapabilities;
@property (nonatomic) BOOL localVolumeMuted;
@property (readonly, nonatomic, getter=isLocalDeviceDesignatedGroupLeader) BOOL localDeviceDesignatedGroupLeader;
@property (readonly, nonatomic) BOOL useLocalValues;
@property (readonly, nonatomic) BOOL useOutputContextValues;
@property (readonly, nonatomic, getter=isOutputContextEmpty) BOOL outputContextEmpty;
@property (retain, nonatomic) MRAVOutputDevice *designatedGroupLeaderWhenContextEmpty;

+ (id)sharedOutputContextController;

- (id)adjustVolume:(long long)a0 outputDeviceUID:(id)a1 details:(id)a2;
- (void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void)dealloc;
- (unsigned int)volumeControlCapabilities;
- (void)_handleOutputDeviceVolumeMutedDidChangeNotification:(id)a0;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)a0 error:(id *)a1;
- (id)muteVolume:(BOOL)a0 outputDeviceUID:(id)a1 details:(id)a2;
- (void)_handleLocalDeviceVolumeDidChangeNotification:(id)a0;
- (id)outputDevices;
- (void)_handleOutputDeviceDidChangeNotification:(id)a0;
- (BOOL)volumeMutedForOutputDevice:(id)a0 error:(id *)a1;
- (id)initWithOutputContext:(id)a0;
- (void)_handleOutputDeviceAddedNotification:(id)a0;
- (float)volume;
- (id)description;
- (void)_handleOutputDeviceRemovedNotification:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (float)volumeForOutputDeviceUID:(id)a0 error:(id *)a1;
- (id)debugDescription;
- (id)setVolume:(float)a0 outputDeviceUID:(id)a1 details:(id)a2;
- (void)_handleOutputDevicesReloadedNotification:(id)a0;
- (void)_handleLocalDeviceVolumeMutedDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)a0;
- (void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)a0;

@end
