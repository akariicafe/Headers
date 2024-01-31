@class WBSCacheRetainReleasePolicy, NSMutableDictionary, NSURL, NSMutableSet, NSObject, WBSCoalescedAsynchronousWriter;
@protocol WBSSiteMetadataImageCacheDelegate, OS_dispatch_queue;

@interface WBSSiteMetadataImageCache : NSObject {
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheAccessLock;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _terminating;
    NSMutableDictionary *_imagesForKeyStrings;
    NSMutableSet *_missingImageKeyStrings;
    NSMutableDictionary *_keyStringRequestsToCompletionHandlers;
    WBSCacheRetainReleasePolicy *_cachePolicy;
    NSMutableDictionary *_cacheSettings;
    WBSCoalescedAsynchronousWriter *_cacheSettingsWriter;
    unsigned long long _fileProtectionOptions;
}

@property (readonly, nonatomic) NSURL *imageDirectoryURL;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic, getter=isTerminating) BOOL terminating;
@property (weak) id<WBSSiteMetadataImageCacheDelegate> delegate;

- (id)init;
- (id)settingForKey:(id)a0;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (void)emptyCache;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)savePendingChangesBeforeTermination;
- (void)_notifyDidFinishLoadingSettings;
- (void)removeAllImages;
- (void)setUpImageCache;
- (id)_cacheSettingsFileURL;
- (void)_didLoadImage:(id)a0 forKeyString:(id)a1 fromDisk:(BOOL)a2;
- (id)_diskAccessQueueName;
- (void)_dispatchDiskAccessBlock:(id /* block */)a0;
- (void)_emptyCacheDirectory;
- (id)_fileLocationForKeyString:(id)a0;
- (id)_fileNameForKeyString:(id)a0;
- (BOOL)_internalDidLoadImageAndShouldNotify:(id)a0 forKeyString:(id)a1 fromDisk:(BOOL)a2;
- (long long)_internalImageStateForKeyString:(id)a0;
- (void)_internalPurgeUnneededImages;
- (id)_internalQueueName;
- (void)_internalReleaseImageForKeyString:(id)a0;
- (void)_internalRemoveAllImages;
- (void)_internalRemoveImagesFromCacheForKeyStrings:(id)a0;
- (void)_internalSaveImageToDisk:(id)a0 forKeyString:(id)a1 completionHandler:(id /* block */)a2;
- (void)_internalSetImageState:(long long)a0 forKeyString:(id)a1;
- (void)_internalSetUpImageCache;
- (void)_removeImagesPassingTest:(id /* block */)a0;
- (void)_requestImageForKeyString:(id)a0 completionHandler:(id /* block */)a1;
- (void)getImageForKeyString:(id)a0 completionHandler:(id /* block */)a1;
- (id)imageForKeyString:(id)a0 getImageState:(long long *)a1;
- (long long)imageStateForKeyString:(id)a0;
- (id)initWithImageDirectoryURL:(id)a0 imageType:(long long)a1;
- (id)initWithImageDirectoryURL:(id)a0 imageType:(long long)a1 fileProtectionOptions:(unsigned long long)a2;
- (BOOL)isImageRetainedForKeyString:(id)a0;
- (void)purgeUnneededImages;
- (void)releaseImageForKeyString:(id)a0;
- (void)releaseImageWithKeyStringProvider:(id /* block */)a0;
- (void)releaseImagesForKeyStrings:(id)a0;
- (void)removeImagesFromCacheForKeyStrings:(id)a0;
- (void)retainImageForKeyString:(id)a0;
- (void)retainImageWithKeyStringProvider:(id /* block */)a0;
- (void)retainImagesForKeyStrings:(id)a0;
- (void)saveImageToDisk:(id)a0 forKeyString:(id)a1 completionHandler:(id /* block */)a2;
- (void)setImage:(id)a0 forKeyString:(id)a1;
- (void)setImageState:(long long)a0 forKeyString:(id)a1;

@end
