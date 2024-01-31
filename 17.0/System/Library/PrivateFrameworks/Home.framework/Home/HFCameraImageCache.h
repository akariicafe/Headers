@class BSUIMappedImageCache;

@interface HFCameraImageCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _imageCacheLock;
}

@property (retain, nonatomic) BSUIMappedImageCache *imageCache;

+ (id)faceCropKeyForPersonName:(id)a0;
+ (id)heroFrameKeyForCameraClipIdentifierString:(id)a0;
+ (id)personNameForFaceCropKey:(id)a0;
+ (id)posterFrameKeyForCameraClipIdentifierString:(id)a0 withOffset:(float)a1;

- (id)init;
- (id)imageForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)releaseRecoverableResources;
- (void)addImage:(id)a0 forKey:(id)a1;
- (void)purgeAllImages;

@end
