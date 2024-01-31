@class MRAVOutputDevice, MRDeviceInfo;

@interface MRDeviceInfoOutputDevice : MRAVOutputDevice

@property (nonatomic) BOOL exporting;
@property (retain, nonatomic) MRAVOutputDevice *fallbackOutputDevice;
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;

- (BOOL)isLocalDevice;
- (unsigned int)deviceSubtype;
- (BOOL)isGroupLeader;
- (id)clusterComposition;
- (BOOL)canAccessiCloudMusicLibrary;
- (BOOL)isRemoteControllable;
- (unsigned long long)configuredClusterSize;
- (BOOL)isGroupable;
- (id)logicalDeviceID;
- (BOOL)groupContainsGroupLeader;
- (BOOL)canAccessAppleMusic;
- (BOOL)parentGroupContainsDiscoverableLeader;
- (BOOL)supportsMultiplayer;
- (BOOL)supportsBufferedAirPlay;
- (BOOL)canAccessRemoteAssets;
- (unsigned int)clusterType;
- (long long)hostDeviceClass;
- (unsigned int)volumeCapabilities;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isVolumeMuted;
- (id)modelID;
- (id)uid;
- (float)volume;
- (id)groupID;
- (id)avOutputDevice;
- (void).cxx_destruct;
- (id)name;
- (unsigned int)deviceType;
- (id)clusterCompositionOutputDevices;
- (id)clusterCompositionMembers;
- (id)initWithDeviceInfo:(id)a0;
- (id)initWithDeviceInfo:(id)a0 fallbackOutputDevice:(id)a1 forExporting:(BOOL)a2;
- (id)initWithDeviceInfo:(id)a0 forExporting:(BOOL)a1;
- (BOOL)shouldBeLocallyHosted;

@end
