@class NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {
    AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal *_availableOutputDevices;
}

@property (readonly, nonatomic) NSArray *recentlyUsedDevices;
@property (readonly, nonatomic) NSArray *otherDevices;

+ (id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)impl;
- (id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)a0;
- (void)_loadOutputDevices;
- (BOOL)isEqual:(id)a0;

@end
