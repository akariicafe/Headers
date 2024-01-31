@class NSString, VIImage;

@interface VILazyImage : NSObject <VIImageContent> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    VIImage *_image;
    id /* block */ _loader;
    struct CGSize { double width; double height; } _knownImageSize;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })imageSize;
- (void)dealloc;
- (BOOL)isLoaded;
- (void).cxx_destruct;
- (id)_image;
- (id)initWithImageLoader:(id /* block */)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void)_loadImageIfPossible;
- (id)initWithImageLoader:(id /* block */)a0;

@end
