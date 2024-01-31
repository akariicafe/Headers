@class CIBurstYUVImage, NSMutableArray, NSMutableDictionary;

@interface CIBurstThumbnailCluster : NSObject

@property NSMutableArray *burstImages;
@property NSMutableDictionary *imageProps;
@property CIBurstYUVImage *image;
@property struct __IOSurface { } *fullsizeJpegData;
@property id /* block */ completionBlock;

- (id)init;
- (void)dealloc;
- (void)addItemsFromCluster:(id)a0;
- (float)computeMergeCost:(id)a0 :(int *)a1 :(int)a2;
- (id)initWithImageData:(id)a0 dict:(id)a1 identifier:(id)a2 imageProps:(id)a3 completionBlock:(id /* block */)a4;
- (void)releaseImage;

@end
