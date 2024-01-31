@class AVCaptureDeferredPhotoSettings, NSString;

@interface PLCapturePhotoSettings : PLAbstractEncodableObject <PLCapturePhotoSettings> {
    NSString *_uuid;
}

@property (retain) AVCaptureDeferredPhotoSettings *photoSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)photoSettingsWithPhotoSettings:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPhotoSettings:(id)a0;

@end
