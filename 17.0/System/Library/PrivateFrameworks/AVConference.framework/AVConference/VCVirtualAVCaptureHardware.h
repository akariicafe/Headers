@class NSDictionary;

@interface VCVirtualAVCaptureHardware : NSObject {
    NSDictionary *_virtualHardware;
}

@property (readonly, nonatomic) NSDictionary *devices;

- (void)dealloc;
- (id)initForDevice:(id)a0;
- (id)defaultFormatForDeviceID:(id)a0;
- (struct { int x0; int x1; })highResolutionStillImageDimensionsWithFormatDict:(id)a0;
- (id)newDeviceFormatsFromJsonList:(id)a0;
- (struct opaqueCMFormatDescription { } *)newFormatDescription:(id)a0;
- (id)newVirtualHardwareForDevice:(id)a0;
- (id)supportedMaxPhotoDimensionsWithFormatDict:(id)a0;
- (id)videoSupportedFrameRateRangesWithFormatDict:(id)a0;

@end
