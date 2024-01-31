@class NSString, NSArray, ClientConnection, CalSearch, NSObject, NSMutableArray;
@protocol NSObject, OS_dispatch_semaphore;

@interface CADCalSearchOperation : NSOperation <CalSearchDataSink> {
    ClientConnection *_connection;
    CalSearch *_currentSearch;
    int _currentDatabaseID;
    NSArray *_calendars;
    NSString *_searchTerm;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
    unsigned int _replyID;
    id<NSObject> _boostToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_objectIDsForPrivacyAccounting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationWithConnection:(id)a0 searchTerm:(id)a1 calendars:(id)a2 replyID:(unsigned int)a3;

- (void)dealloc;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)calSearch:(id)a0 foundOccurrences:(struct __CFArray { } *)a1 cachedDays:(struct __CFArray { } *)a2 cachedDaysIndexes:(struct __CFArray { } *)a3;
- (void)calSearch:(id)a0 showResultsStartingOnDate:(double)a1;
- (void)calSearchComplete:(id)a0;
- (BOOL)calSearchShouldStopSearching:(id)a0;
- (unsigned int)replyID;
- (void)_completeOperation;
- (void)configureSearch:(id)a0;
- (id)initWithConnection:(id)a0 searchTerm:(id)a1 calendars:(id)a2 replyID:(unsigned int)a3;

@end
