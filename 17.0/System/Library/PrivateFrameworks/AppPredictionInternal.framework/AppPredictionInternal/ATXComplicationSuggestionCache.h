@class _PASQueueLock;

@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock *_lock;
}

- (id)init;
- (BOOL)writeComplicationsLandscapeModularSetCache:(id)a0;
- (id)fetchModularSetComplicationDescriptors;
- (BOOL)_writeComplicationsCache:(id)a0 path:(id)a1 withError:(id *)a2;
- (BOOL)writeComplicationsModularSetCache:(id)a0;
- (id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)fetchLandscapeModularSetComplicationDescriptors;
- (BOOL)writeComplicationsInlineSetCache:(id)a0;
- (id)fetchInlineSetComplicationDescriptors;

@end
