@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {
    NSArray *_deviceTypes;
    long long _position;
    NSString *_mediaType;
    NSArray *_supportedMultiCamDeviceSets;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;

+ (id)allDevices;
+ (void)initialize;
+ (id)allMetadataCameraDevices;
+ (id)allMetadataCameraDeviceTypes;
+ (id)allAudioDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)allPointCloudDevices;
+ (id)allVirtualDevices;
+ (id)allAudioDevices;
+ (id)allVideoDeviceTypes;
+ (id)allVirtualDeviceTypes;
+ (id)allPointCloudDeviceTypes;
+ (id)allVideoDevices;
+ (id)allDeviceTypes;

- (id)init;
- (void)dealloc;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;
- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;
- (id)description;

@end
