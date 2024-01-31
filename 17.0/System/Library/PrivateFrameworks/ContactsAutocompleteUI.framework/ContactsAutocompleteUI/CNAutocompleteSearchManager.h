@class NSMutableArray, NSArray, NSString, NSMutableDictionary, CNAutocompleteStore, NSOperationQueue, NSNumber;
@protocol CNAutocompleteUIFetchDelegate;

@interface CNAutocompleteSearchManager : NSObject {
    NSMutableDictionary *_taskContextsByTaskID;
    CNAutocompleteStore *_autocompleteStore;
    NSOperationQueue *_queue;
    unsigned int _genNumber;
    unsigned long long _searchTypes;
    int _contactSearchAccountChangedToken;
    BOOL _registeredForAddressBookChanges;
    NSNumber *_shouldIncludeGroupResultsImpl;
    NSMutableArray *_corecipientSearchTaskIDs;
}

@property (readonly, nonatomic) NSArray *searchAccounts;
@property (weak) id<CNAutocompleteUIFetchDelegate> fetchDelegate;
@property (retain) NSArray *searchAccountIDs;
@property (copy, nonatomic) NSString *recentsBundleIdentifier;
@property (nonatomic) unsigned long long implicitGroupCreationThreshold;
@property (nonatomic) BOOL includeUpcomingEventMembers;
@property (nonatomic) unsigned long long autocompleteSearchType;
@property (copy, nonatomic) NSString *sendingAccountIdentifier;
@property (copy, nonatomic) NSString *sendingAddress;
@property (nonatomic) BOOL shouldIncludeGroupResults;
@property (nonatomic) BOOL shouldUnifyResults;
@property (nonatomic, getter=isSimulatedResultsEnabled) BOOL simulatedResultsEnabled;

- (id)init;
- (void)dealloc;
- (void)setSearchTypes:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithAutocompleteSearchType:(unsigned long long)a0;
- (void)cancelTaskWithID:(id)a0;
- (void)didSelectRecipient:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeRecipientResult:(id)a0;
- (id)searchForText:(id)a0 withAutocompleteFetchContext:(id)a1 consumer:(id)a2;
- (id)searchForText:(id)a0 consumer:(id)a1;
- (void)_handleContactsAutocompleteSearch:(id)a0 returnedResults:(id)a1 taskID:(id)a2;
- (void)_handleContactsAutocompleteSearchFinished:(id)a0 taskID:(id)a1;
- (void)_handleTaskFinished:(id)a0 context:(id)a1;
- (id)_nextTaskID;
- (id)initWithAutocompleteStore:(id)a0 searchType:(unsigned long long)a1;
- (id)searchForCorecipientsWithAutocompleteFetchContext:(id)a0 consumer:(id)a1;

@end
