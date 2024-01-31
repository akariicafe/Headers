@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PXMemoriesFeedDataSourceManager : PXMemoriesFeedDataSourceManagerBase <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_privateWorkQueue;
    unsigned long long _workTag;
}

@property (nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) BOOL _generatingAdditionalEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)_generateAdditionalEntriesWithOldDataSource:(id)a0 startingIndex:(unsigned long long)a1 sync:(BOOL)a2;
- (void)reloadMemories:(BOOL)a0;
- (void)_handleFinishedGeneratingAdditionalEntriesWithNewDataSource:(id)a0 changeDetails:(id)a1 firstUngroupedMemoryIndex:(unsigned long long)a2;
- (unsigned long long)_indexOfEntry:(id)a0 inSortedEntries:(id)a1 options:(unsigned long long)a2;
- (unsigned long long)_indexOfEntryForMemory:(id)a0 inSortedEntries:(id)a1 options:(unsigned long long)a2;
- (void)generateAdditionalEntriesIfPossible;
- (void)generateAdditionalEntriesWithOldDataSource:(id)a0 startingIndex:(unsigned long long)a1 sync:(BOOL)a2;
- (void)handleChangedKeyAssetsForMemories:(id)a0;
- (void)handleIncrementalFetchResultChange:(id)a0 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)a1;
- (void)handleNonIncrementalFetchResultChange:(id)a0;
- (id)objectReferenceForMemory:(id)a0;
- (void)startGeneratingMemories;

@end
