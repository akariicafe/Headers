@class NSArray, NSDictionary, NSPredicate, NSOperationQueue;
@protocol NSMetadataQueryDelegate;

@interface NSMetadataQuery : NSObject {
    unsigned long long _flags;
    double _interval;
    id _private[11];
    void *_reserved;
}

@property id<NSMetadataQueryDelegate> delegate;
@property (copy) NSPredicate *predicate;
@property (copy) NSArray *sortDescriptors;
@property (copy) NSArray *valueListAttributes;
@property (copy) NSArray *groupingAttributes;
@property double notificationBatchingInterval;
@property (copy) NSArray *searchScopes;
@property (copy) NSArray *searchItems;
@property (retain) NSOperationQueue *operationQueue;
@property (readonly, getter=isStarted) BOOL started;
@property (readonly, getter=isGathering) BOOL gathering;
@property (readonly, getter=isStopped) BOOL stopped;
@property (readonly) unsigned long long resultCount;
@property (readonly, copy) NSArray *results;
@property (readonly, copy) NSDictionary *valueLists;
@property (readonly, copy) NSArray *groupedResults;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)a0 toURL:(id)a1;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)a0;
+ (void)didEndPossibleFileOperation:(id)a0;
+ (Class)_stitchingClass;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)a0;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)_update;
- (id)init;
- (void)dealloc;
- (id)_queryString;
- (void)stopQuery;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)_postNotificationName:(id)a0 userInfo:(id)a1;
- (id)_allAttributes;
- (BOOL)_canModifyQueryOrObserversInCurrentContext;
- (void)_disableAutoUpdates;
- (void)_enableAutoUpdates;
- (id)_externalDocumentsBundleIdentifier;
- (void)_inOriginalContextInvokeBlock:(id /* block */)a0;
- (BOOL)_isMDQuery;
- (void)_noteNote1:(id)a0;
- (void)_noteNote2:(id)a0;
- (void)_noteNote3:(id)a0;
- (void)_noteNote4:(id)a0;
- (void)_noteNote5:(id)a0;
- (id)_pendingChangeNotificationsArrayForKey:(id)a0 create:(BOOL)a1;
- (void)_recreateQuery;
- (void)_resetQueryState;
- (void)_setBatchingParams;
- (void)_setExternalDocumentsBundleIdentifier:(id)a0;
- (id)_sortingAttributes;
- (void)_validateInvocationContext;
- (void)_validatePredicate:(id)a0 withScopes:(id)a1;
- (void)_zapResultArrayIfIdenticalTo:(id)a0;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)enumerateResultsUsingBlock:(id /* block */)a0;
- (void)enumerateResultsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)indexOfResult:(id)a0;
- (id)resultAtIndex:(unsigned long long)a0;
- (id)searchItemURLs;
- (void)setSearchItemURLs:(id)a0;
- (BOOL)startQuery;
- (id)valueOfAttribute:(id)a0 forResultAtIndex:(unsigned long long)a1;

@end
