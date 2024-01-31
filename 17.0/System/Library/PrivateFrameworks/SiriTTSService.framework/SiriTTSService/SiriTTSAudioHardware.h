@class NSString;

@interface SiriTTSAudioHardware : NSObject

@property (nonatomic) unsigned int audioDeviceID;
@property (readonly) NSString *routeType;
@property (readonly) BOOL isBluetooth;
@property (readonly) BOOL isAppleProduct;
@property (readonly) long long vendorId;
@property (readonly) long long productId;
@property (readonly) float volume;
@property (nonatomic) BOOL duckOthers;

+ (id)defaultOutput;

- (void).cxx_destruct;
- (void)fetchHardwareInfo;

@end
