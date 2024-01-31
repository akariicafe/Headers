@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject {
    NSMutableDictionary *mImageMap;
}

@property (readonly, nonatomic) int quality;
@property (readonly, nonatomic) double canvasScale;

- (void).cxx_destruct;
- (void)cacheProvider:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGImage { } *)degradedImageRefForProvider:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithQuality:(int)a0 canvasScale:(double)a1;
- (void)doneCaching:(id)a0 forProvider:(id)a1;
- (Class)imageMapValueClass;
- (double)qualityScaleForSize:(struct CGSize { double x0; double x1; })a0;

@end
