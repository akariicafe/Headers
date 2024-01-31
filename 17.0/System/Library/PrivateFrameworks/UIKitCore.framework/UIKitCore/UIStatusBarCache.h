@class CPBitmapStore;

@interface UIStatusBarCache : NSObject {
    CPBitmapStore *_store;
}

@property (readonly, nonatomic, getter=isWriteable) BOOL writeable;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)cacheImage:(id)a0 named:(id)a1 forGroup:(id)a2;
- (id)imageNamed:(id)a0 forGroup:(id)a1 withScale:(double)a2;
- (void)removeImagesInGroup:(id)a0;

@end
