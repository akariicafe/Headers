@class NSData, FigCaptureStillImageSettings;

@interface AVCaptureDeferredPhotoSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) FigCaptureStillImageSettings *captureSettings;
@property (readonly, copy, nonatomic) NSData *serializedProcessingSettings;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithCaptureSettings:(id)a0 serializedProcessingSettings:(id)a1;

@end
