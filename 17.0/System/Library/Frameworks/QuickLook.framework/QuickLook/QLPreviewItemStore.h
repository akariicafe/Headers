@class NSPointerArray, QLDataSource;
@protocol QLPreviewItemProvider, QLPreviewItemStoreDelegate;

@interface QLPreviewItemStore : NSObject <QLPreviewItemProvider, QLPreviewControllerDataSource> {
    NSPointerArray *_cache;
    QLDataSource *_internalItemProvider;
}

@property (weak, nonatomic) id<QLPreviewItemProvider> itemProvider;
@property (readonly) unsigned long long numberOfItems;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } possibleRange;
@property (weak) id<QLPreviewItemStoreDelegate> delegate;
@property (readonly) BOOL isArchive;

- (id)init;
- (void)clearCache;
- (void)dealloc;
- (void)clearItems;
- (void).cxx_destruct;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)initWithPreviewItems:(id)a0;
- (void)reloadWithNumberOfPreviewItems:(unsigned long long)a0;
- (BOOL)hasLoadedItemsMatching:(id /* block */)a0;
- (long long)indexOfPreviewItem:(id)a0;
- (id)initWithItemsOfDirectoryAtURL:(id)a0;
- (id)loadedItemsMatching:(id /* block */)a0;
- (void)previewItemAtIndex:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)resolvedPreviewItemAtIndex:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;

@end
