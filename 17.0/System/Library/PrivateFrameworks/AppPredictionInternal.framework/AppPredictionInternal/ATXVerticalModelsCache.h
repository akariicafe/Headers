@class _PASQueueLock;

@interface ATXVerticalModelsCache : NSObject {
    _PASQueueLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)_fetchWebsiteCacheWithPath:(id)a0 error:(id *)a1;
- (id)_fetchWebsiteTitlesAndSubtitlesCacheWithPath:(id)a0 error:(id *)a1;
- (BOOL)_writeCache:(id)a0 path:(id)a1 withError:(id *)a2;
- (id)fetchWebsiteSuggestionsCache;
- (id)fetchWebsiteTitlesAndSubtitlesCache;
- (BOOL)writeWebsiteSuggestionsCache:(id)a0;
- (BOOL)writeWebsiteTitlesAndSubtitlesCache:(id)a0;

@end
