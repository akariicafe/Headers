@class NSArray;
@protocol MTLTexture;

@interface PTEffectRenderRequest : NSObject {
    struct __CFDictionary { } *_detectedObjects;
}

@property double frameTimeSeconds;
@property unsigned long long effectType;
@property struct __CVBuffer { } *inColorBuffer;
@property struct __CVBuffer { } *outColorBuffer;
@property struct __CVBuffer { } *inExternalDisparityBuffer;
@property struct __CVBuffer { } *inScreenCaptureBuffer;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inScreenCaptureCropRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inScreenCaptureRect;
@property struct __CVBuffer { } *outPersonSegmentationMatteBuffer;
@property struct __CFDictionary { } *detectedObjects;
@property BOOL focusOnAll;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property long long effectQuality;
@property float apertureSDOF;
@property float relightStrengthStudioLight;
@property (retain, nonatomic) NSArray *reactions;
@property float luxLevel;
@property float focalLength;
@property BOOL outColorBufferWriteSkipped;
@property (retain, nonatomic) id<MTLTexture> inBilbyAlphaMaskTexture;
@property BOOL bilbyFloatingMode;
@property (copy, nonatomic) id /* block */ onMSRScheduled;

+ (float)apertureSDOFDefault;
+ (void /* unknown type, empty encoding */)apertureSDOFRange;
+ (float)relightStrengthStudioLightDefault;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)logPixelbufferMetadata:(id)a0;

@end
