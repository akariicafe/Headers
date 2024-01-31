@class NSURL, NSString, NSMutableSet;

@interface BSUIMappedImageCacheRegistry : NSObject {
    NSURL *_cachesPath;
    NSString *_tmpPath;
    NSMutableSet *_uniqueIdentifiers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _tmpPathLock;
}

- (void).cxx_destruct;

@end
