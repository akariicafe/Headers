@class TSCHTextCache, NSMapTable;

@interface TSCHTextCacheMap : NSObject {
    TSCHTextCache *_mainCache;
    NSMapTable *_map;
}

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)textCacheForStyleProvidingSource:(id)a0;

@end
