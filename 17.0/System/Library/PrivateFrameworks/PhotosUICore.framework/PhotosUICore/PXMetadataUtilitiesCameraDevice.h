@class NSString, NSNumber;

@interface PXMetadataUtilitiesCameraDevice : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;

+ (id)supportedDevices;
+ (id)cameraForFocalLength:(id)a0 deviceName:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisplayName:(id)a0 focalLength:(id)a1 focalLengthIn35mm:(id)a2;

@end
