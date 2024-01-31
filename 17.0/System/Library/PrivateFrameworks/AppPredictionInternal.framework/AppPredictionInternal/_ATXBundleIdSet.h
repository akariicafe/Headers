@class _PASCFBurstTrie;

@interface _ATXBundleIdSet : NSObject {
    _PASCFBurstTrie *_trie;
}

+ (id)sharedInstance;

- (BOOL)containsBundleId:(id)a0;
- (id)init;
- (id)trie;
- (void).cxx_destruct;

@end
