@class NSData, AVDepthData;

@interface VNDepthRepresentation : NSObject {
    AVDepthData *_depthData;
}

@property (readonly) struct __CVBuffer { } *depthBuffer;
@property (readonly) NSData *lensDistortionData;
@property (readonly) struct { void /* unknown type, empty encoding */ x0[3]; } cameraIntrinsics;
@property (readonly) BOOL highQuality;
@property (readonly) BOOL absoluteAccuracy;
@property (readonly) unsigned int orientation;

+ (id)depthRepresentationForDepthData:(id)a0 orientation:(unsigned int)a1;
+ (id)depthRepresentationForImageSource:(struct CGImageSource { } *)a0 orientation:(unsigned int)a1;

- (void).cxx_destruct;
- (id)_initWithAVDepthData:(id)a0 orientation:(unsigned int)a1;

@end
