@class _PASLock;

@interface PPSocialHighlightStorageUtilities : NSObject {
    _PASLock *_lock;
}

- (id)init;
- (void)clearCache;
- (void).cxx_destruct;
- (id)resolveBundleIdToApplicationIdentifierIfInstalled:(id)a0;

@end
