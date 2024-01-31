@class NSString, CNAutocompleteSearchManager, NSNumber, NSMutableArray;
@protocol MFMailComposeContactsSearchControllerDelegate;

@interface MFMailComposeContactsSearchController : NSObject <CNAutocompleteSearchConsumer> {
    CNAutocompleteSearchManager *_manager;
    NSMutableArray *_autocompleteSearchResults;
    NSMutableArray *_corecipientSearchResults;
    NSNumber *_corecipientSearchTaskID;
    BOOL _foundAnySearchResults;
    unsigned long long _waitingOnSearchResultsCount;
}

@property (retain, nonatomic) NSNumber *taskID;
@property (weak, nonatomic) id<MFMailComposeContactsSearchControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_reset;
- (void).cxx_destruct;
- (void)cancelSearch;
- (void)removeRecipient:(id)a0;
- (void)beganNetworkActivity;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)consumeCorecipientSearchResults:(id)a0 taskID:(id)a1;
- (void)didSelectRecipient:(id)a0 atIndex:(unsigned long long)a1;
- (void)endedNetworkActivity;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedTaskWithID:(id)a0;
- (void)searchWithString:(id)a0;
- (void)findCorecipientsWithRecipients:(id)a0;
- (void)_cancelSearchAndNotify:(BOOL)a0;
- (void)_finishSearch;
- (void)searchWithString:(id)a0 enteredRecipients:(id)a1 title:(id)a2;

@end
