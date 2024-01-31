@class NSMutableDictionary, NSString, NSMutableSet, TVPExternalImageConfig;

@interface TVPExternalImageLoader : NSObject <TVPPlaybackImageLoader>

@property (retain, nonatomic) TVPExternalImageConfig *config;
@property (retain, nonatomic) NSMutableSet *imageProxies;
@property (retain, nonatomic) NSMutableDictionary *imageProxyMappings;
@property (retain, nonatomic) NSMutableSet *loadedImageActualTimes;
@property (readonly, nonatomic) double firstImageTime;
@property (readonly, nonatomic) double lastImageTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (unsigned long long)_closestImageIndexForTime:(double)a0 actualTime:(double *)a1 imageInterval:(double)a2;
- (id)_closestURLForImageTime:(double)a0 actualTime:(double *)a1;
- (void)cancelImageLoadingForIdentifiers:(id)a0;
- (double)closestImageTimeForTime:(double)a0;
- (double)closestImageTimeForTime:(double)a0 imageInterval:(double)a1;
- (BOOL)imageIsLoadedForTime:(double)a0;
- (id)loadImagesForTimes:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 withHandler:(id /* block */)a2;
- (id)loadedImageForTime:(double)a0;

@end
