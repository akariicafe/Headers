@class NSCache, MPUBorderView;

@interface MPUBorderDrawingCache : NSObject {
    MPUBorderView *_borderView;
    NSCache *_images;
}

@property (nonatomic) double displayScale;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (id)_borderView;
- (void).cxx_destruct;
- (void)_applicationDidReceiveMemoryWarning:(id)a0;
- (id)imageForBorderConfiguration:(id)a0;

@end
