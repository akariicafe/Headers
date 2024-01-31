@class NSString, NSArray, NSObject, NSCache;
@protocol OS_dispatch_queue, WBSCloudTabDeviceProvider, WBBookmarkProvider;

@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSCloudTabDeviceObserving, WBSURLCompletionDataSource> {
    id<WBSCloudTabDeviceProvider> _cloudTabStore;
    NSArray *_cloudDevices;
    NSObject<OS_dispatch_queue> *_cloudTabsAccessQueue;
    NSCache *_bookmarksCache;
    id<WBBookmarkProvider> _bookmarkProvider;
    NSString *_profileIdentifier;
}

@property (nonatomic) int searchableCollectionsMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cloudTabDeviceProvider:(id)a0 didUpdateCloudTabsInProfileWithIdentifier:(id)a1;
- (void)enumerateMatchDataForTypedStringHint:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 options:(unsigned long long)a2 withBlock:(id /* block */)a3;
- (id)fakeBookmarkMatchDataWithURLString:(id)a0 title:(id)a1 shouldPreload:(BOOL)a2;
- (void)_updateCloudDevices:(id)a0;
- (void)clearBookmarksCache;
- (id)initWithCloudTabStore:(id)a0 profileIdentifier:(id)a1 searchableCollectionsMask:(int)a2 bookmarkProvider:(id)a3;

@end
