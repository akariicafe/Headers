@class NSString, NSMutableDictionary, NSData, FPExtensionEnumerationSettings, NSObject;
@protocol FPCollectionDataSourceDelegate, FPXEnumerator, OS_dispatch_queue, FPDLifetimeServicing;

@interface FPExtensionDataSource : NSObject <FPXEnumeratorObserver, FPCollectionDataSource> {
    FPExtensionEnumerationSettings *_enumerationSettings;
    id<FPXEnumerator> _enumerator;
    BOOL _started;
    BOOL _invalidated;
    BOOL _shouldUpdate;
    BOOL _enumeratingExtensionResults;
    NSData *_nextPageToken;
    NSData *_changeToken;
    unsigned long long _numGatheredItems;
    id<FPDLifetimeServicing> _lifetimeExtender;
    NSMutableDictionary *_oobBuffer;
}

@property (class) long long suggestedPageSize;
@property (class) long long suggestedBatchSize;

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMoreIncoming;
@property (weak, nonatomic) id<FPCollectionDataSourceDelegate> delegate;

- (void)invalidateWithError:(id)a0;
- (void)start;
- (void)_invalidate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)didUpdateItem:(id)a0;
- (void)_invalidateWithError:(id)a0;
- (void)enumerationResultsDidChange;
- (void)_updateItems;
- (void)_gatherInitialItems;
- (void)_gatherMoreItemsAfterPage:(id)a0 section:(unsigned long long)a1;
- (id)_initialPageFromSortDescriptors:(id)a0;
- (void)_updateItemsWithUpdatesCount:(unsigned long long)a0 section:(unsigned long long)a1;
- (void)enumerationMightHaveResumed;
- (id)initWithEnumerationSettings:(id)a0;

@end
