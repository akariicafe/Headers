@class WBSCache, NSURL;

@interface ReadingListLeadImageCache : NSObject {
    WBSCache *_cache;
    NSURL *_directoryURL;
}

- (id)initWithDirectoryURL:(id)a0;
- (void)clearCache;
- (void).cxx_destruct;
- (id)loadImageSynchronouslyForIconUUID:(id)a0;

@end
