@interface OZARFrameMetadata : OZARMetadata <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (nonatomic) struct CGSize { double width; double height; } cameraImageResolution;

+ (struct opaqueCMFormatDescription { } *)metadataFormat;
+ (id)metadataItemIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 cameraImageResolution:(struct CGSize { double x0; double x1; })a2;

@end
