@class FPDDomain, NSString, NSError, NSURL, NSDate, NSObject, FPDExtension;
@protocol FPDDomainIndexerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface FPDDomainIndexer : NSObject {
    NSString *_providerDomainID;
    NSObject<OS_dispatch_source> *_timerSource;
    NSURL *_stateURL;
    NSURL *_needsAuthURL;
    NSURL *_droppedIndexURL;
    BOOL _needsIndexing;
    BOOL _isIndexing;
    BOOL _enabled;
    BOOL _invalidated;
    BOOL _isStarted;
    BOOL _clearNeedsIndexing;
    BOOL _droppedIndex;
    unsigned long long _batchIndexedCount;
    unsigned long long _batchIndexedCountSinceLastIndexing;
    unsigned long long _consecutiveBatchErrorCount;
    NSDate *_lastIndexingStartDate;
    NSError *_lastError;
    NSString *_spotlightDomainIdentifier;
    BOOL _registeredWithScheduler;
}

@property (weak, nonatomic) FPDExtension *extension;
@property (nonatomic) BOOL needsAuthentication;
@property (readonly, nonatomic) BOOL learnNeedsAuthenticationFromBatchError;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (weak, nonatomic) id<FPDDomainIndexerDelegate> delegate;
@property (nonatomic) unsigned long long maxRetryDelayInSec;
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) FPDDomain *domain;

- (void)_cancelTimer;
- (void)start;
- (void)dumpStateTo:(id)a0;
- (void)invalidate;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)dropIndexForDomainRemoval:(BOOL)a0 completion:(id /* block */)a1;
- (void)signalNeedsReindexFromScratchWithCompletionHandler:(id /* block */)a0;
- (void)__indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)a0;
- (void)_handleOneBatchCompletionWithError:(id)a0 hasMoreChanges:(BOOL)a1;
- (void)_indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)a0;
- (void)_signalChangesWithCompletionHandler:(id /* block */)a0;
- (void)_unregisterFromScheduler;
- (void)clearDroppedIndexOnDisk;
- (void)clearNeedsAuth;
- (void)clearNeedsAuthOnDisk;
- (void)clearNeedsIndexingOnDisk;
- (id)initWithExtension:(id)a0 domain:(id)a1 enabled:(BOOL)a2;
- (id)localSpotlightIndexer;
- (void)persistDroppedIndexOnDisk;
- (void)persistNeedsIndexingOnDisk;
- (void)persistsNeedsAuthOnDisk;
- (BOOL)readDroppedIndexFromDisk;
- (BOOL)readNeedsAuthFromDisk;
- (BOOL)readNeedsIndexingFromDisk;
- (void)setIndexingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setNeedsAuth;
- (void)signalChangesWithCompletionHandler:(id /* block */)a0;

@end
