@class CIImage;

@interface CILumaMap : CIFilter {
    CIImage *_tableImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (void)dealloc;
- (void)setDefaults;
- (id)_kernel;
- (id)outputImage;
- (const char *)lumaTable;

@end
