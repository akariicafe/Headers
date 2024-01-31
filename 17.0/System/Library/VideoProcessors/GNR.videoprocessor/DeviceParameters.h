@class NoiseModelDeviceParameters, FusionDeviceParameters;

@interface DeviceParameters : NSObject {
    NoiseModelDeviceParameters *nm;
    NoiseModelDeviceParameters *nmHighGain;
    FusionDeviceParameters *fusion;
}

- (void).cxx_destruct;

@end
