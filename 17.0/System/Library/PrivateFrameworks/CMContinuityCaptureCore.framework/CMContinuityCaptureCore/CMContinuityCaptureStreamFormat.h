@class NSString;

@interface CMContinuityCaptureStreamFormat : NSObject <NSSecureCoding, CMContinuityCaptureDictionaryRepresentable> {
    id _formatDescription;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned int pixelFormat;
@property (readonly, nonatomic) unsigned int minFrameRate;
@property (readonly, nonatomic) unsigned int maxFrameRate;
@property (readonly) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly) long long entity;
@property (readonly) struct { long long major; long long minor; long long patch; } minimumSupportedVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 pixelFormat:(unsigned int)a3 minFrameRate:(unsigned int)a4 maxFrameRate:(unsigned int)a5 entity:(long long)a6 minimumSupportedVersion:(struct { long long x0; long long x1; long long x2; })a7;

@end
