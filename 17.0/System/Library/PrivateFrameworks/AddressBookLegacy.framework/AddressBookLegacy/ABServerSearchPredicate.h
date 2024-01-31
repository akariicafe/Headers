@class NSString, NSConditionLock, DAContactsSearchQuery, DADConnection, NSMutableArray;
@protocol ABPredicateDelegate;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {
    void *_source;
    DADConnection *_connection;
    DAContactsSearchQuery *_searchQuery;
    NSMutableArray *_searchResults;
    NSConditionLock *_doneLock;
    int _error;
}

@property (retain, nonatomic) DADConnection *connection;
@property (nonatomic) void *source;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) BOOL includeSourceInResults;
@property (nonatomic) BOOL includePhotosInResults;
@property (nonatomic) id<ABPredicateDelegate> delegate;
@property (readonly, nonatomic) int error;

- (void)dealloc;
- (id)querySerializationIdentifier;
- (void)ab_runPredicateWithSortOrder:(unsigned int)a0 ranked:(BOOL)a1 inAddressBook:(void *)a2 withDelegate:(id)a3;
- (int)_errorForDAStatusCode:(long long)a0;
- (void)_searchQueryIsDone;
- (id)initWithSearchString:(id)a0 source:(void *)a1 account:(id)a2;
- (id)initWithSearchString:(id)a0 source:(void *)a1 account:(id)a2 includeSourceInResults:(BOOL)a3;
- (id)initWithSearchString:(id)a0 source:(void *)a1 account:(id)a2 includeSourceInResults:(BOOL)a3 includePhotosInResults:(BOOL)a4;
- (void)runPredicate;
- (void)runPredicateWithDelegate:(id)a0;
- (void)searchQuery:(id)a0 finishedWithError:(id)a1;
- (void)searchQuery:(id)a0 returnedResults:(id)a1;

@end
