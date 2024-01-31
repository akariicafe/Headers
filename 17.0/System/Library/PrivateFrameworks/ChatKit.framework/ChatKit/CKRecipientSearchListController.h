@class NSArray, IMAccount, CKContactsSearchManager, NSDate, IDSBatchIDQueryController, NSString;
@protocol CKRecipientSearchListControllerDelegate;

@interface CKRecipientSearchListController : CNAutocompleteResultsTableViewController <IDSBatchIDQueryControllerDelegate, CKContactsSearchManagerDelegate>

@property (retain, nonatomic) CKContactsSearchManager *searchManager;
@property (retain, nonatomic) NSDate *idsQueryStartTime;
@property (copy, nonatomic) NSArray *conversationCache;
@property (weak, nonatomic) id<CKRecipientSearchListControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *enteredRecipients;
@property (retain, nonatomic) NSArray *prefilteredRecipients;
@property (nonatomic) BOOL smsEnabled;
@property (nonatomic) BOOL suppressGroupSuggestions;
@property (retain, nonatomic) IMAccount *defaultiMessageAccount;
@property (retain, nonatomic) IDSBatchIDQueryController *statusQueryController;
@property (copy, nonatomic) NSArray *searchResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldHideGroupsDonations;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)cancelSearch;
- (BOOL)hasSearchResults;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)removeRecipient:(id)a0;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)searchWithText:(id)a0;
- (id)_conversationList;
- (char)_serviceColorForRecipients:(id)a0;
- (id)_statusQueryController;
- (void)chatStateChanged:(id)a0;
- (void)contactsSearchManager:(id)a0 finishedSearchingWithResults:(id)a1;
- (id)conversationCacheForContactsSearchManager:(id)a0;
- (void)didSelectRecipient:(id)a0 atIndex:(unsigned long long)a1;
- (long long)idsStatusForAddress:(id)a0;
- (void)invalidateOutstandingIDStatusRequests;
- (void)invalidateSearchManager;
- (BOOL)isSearchResultsHidden;
- (void)viewDidAppearDeferredSetup;

@end
