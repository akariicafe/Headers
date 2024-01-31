@class PXSharedLibraryParticipantValidationManager, NSString, NSArray, NSDictionary, PXIDSAddressQueryController, NSMutableArray, CNAutocompleteSearchManager, PXCNRecipientSearchDataSource, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface PXCNRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager <CNAutocompleteSearchConsumer> {
    NSObject<OS_dispatch_queue> *_creationQueue;
    CNAutocompleteSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    _Atomic unsigned int _currentAtomicSearchTaskID;
    NSMutableArray *_autocompleteSearchResults;
    PXIDSAddressQueryController *_idsAddressQueryController;
    NSObject<OS_dispatch_queue> *_searchResultsQueue;
    NSDictionary *_searchResultsByDestination;
    PXSharedLibraryParticipantValidationManager *_cloudKitShareQueryController;
}

@property (readonly, nonatomic) PXCNRecipientSearchDataSource *dataSource;
@property (retain, nonatomic, setter=_setSearchResults:) NSArray *_searchResults;
@property (readonly, nonatomic) long long _verificationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_createDataSource;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)removeRecipientResult:(id)a0;
- (id)initWithVerificationType:(long long)a0;
- (void)_creationQueue_creatingRecipientSearchResultsForResults:(id)a0 forSearchTaskID:(id)a1;
- (void)_finishedCreatingRecipientSearchResults:(id)a0 forSearchTaskID:(id)a1;
- (void)_handleAddressQueryResults:(id)a0 error:(id)a1;
- (void)queryStringDidChange;

@end
