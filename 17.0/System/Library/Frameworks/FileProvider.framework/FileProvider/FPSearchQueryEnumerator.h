@class NSString, NSFileProviderSearchQuery, CSSearchQuery;

@interface FPSearchQueryEnumerator : NSObject <NSFileProviderEnumerator> {
    NSFileProviderSearchQuery *_fileProviderSearchQuery;
    NSString *_mountPoint;
    CSSearchQuery *_searchQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithSearchQuery:(id)a0 mountPoint:(id)a1;
- (id)_createSearchQuery;
- (id)_fpItemsFromSearchableItems:(id)a0;
- (void)_gatherItemsWithCompletionBlock:(id /* block */)a0;
- (void)enumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;

@end
