@class MRAVConcreteOutputDevice, NSArray, MRAVOutputDevice, NSString;

@interface MRAVRoomOutputDevice : MRAVOutputDevice {
    NSArray *_clusterComposition;
    NSString *_uid;
}

@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic) MRAVConcreteOutputDevice *concreteOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *roomMemberOutputDevice;
@property (readonly, nonatomic) NSArray *roomMemberOutputDevices;
@property (readonly, nonatomic) NSString *label;

+ (id)calculateOutputDeviceIDFromOutputDeviceID:(id)a0 withRoomID:(id)a1;

- (unsigned int)deviceSubtype;
- (BOOL)isPickable;
- (id)clusterComposition;
- (unsigned int)clusterType;
- (void)adjustVolume:(long long)a0 details:(id)a1;
- (id)roomID;
- (id)roomName;
- (unsigned int)volumeCapabilities;
- (void)setVolume:(float)a0 details:(id)a1;
- (BOOL)isVolumeMuted;
- (void)setVolumeMuted:(BOOL)a0 details:(id)a1;
- (id)parentUID;
- (id)debugName;
- (id)modelID;
- (id)uid;
- (float)volume;
- (id)localizedName;
- (void).cxx_destruct;
- (id)name;
- (unsigned int)deviceType;
- (id)primaryID;
- (BOOL)containsUID:(id)a0;
- (id)initWithOutputDevice:(id)a0 memberOutputDevices:(id)a1;

@end
