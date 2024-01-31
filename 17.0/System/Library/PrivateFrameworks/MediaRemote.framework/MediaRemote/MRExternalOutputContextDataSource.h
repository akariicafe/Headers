@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _groupVolumeMuted;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)volumeControlCapabilities;
- (BOOL)isVolumeMuted;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (void)initializeVolumeCapabilitiesForLegacyCleints;
- (void)encodeWithCoder:(id)a0;
- (id)outputDevices;
- (float)volume;
- (void)updateVolumeMuted:(BOOL)a0 outputDeviceUID:(id)a1;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)removeOutputDevices:(id)a0;
- (void)updateOutputDevices:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeAllOutputDevices;

@end
