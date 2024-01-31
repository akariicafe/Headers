@class NSObject, NSString, NSMutableDictionary, AAContactsManager, CNAutocompleteSearchController, UIViewController;
@protocol OS_dispatch_queue, AAUIChooseContactControllerDelegate;

@interface AAUIChooseContactController : NSObject <CNAutocompleteSearchControllerDelegate, CNContactPickerDelegate> {
    CNAutocompleteSearchController *_autocompleteSearchController;
    NSMutableDictionary *_idsReachabilityForRecipientHandle;
    NSMutableDictionary *_idsReachabilityForUnifiedOrGroupRecipientHandle;
    NSMutableDictionary *_handleToRecipient;
    NSObject<OS_dispatch_queue> *_idsStatusAccessQueue;
    AAContactsManager *_contactsManager;
}

@property (weak, nonatomic) id<AAUIChooseContactControllerDelegate> delegate;
@property (readonly, nonatomic) UIViewController *chooseContactViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)_setupViewController;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)didTapTextViewAccessoryButtonForSearchController:(id)a0;
- (id)searchController:(id)a0 composeRecipientForAddress:(id)a1;
- (void)searchController:(id)a0 didAddRecipient:(id)a1;
- (void)searchController:(id)a0 didRemoveRecipient:(id)a1;
- (unsigned long long)searchController:(id)a0 presentationOptionsForRecipient:(id)a1;
- (id)searchController:(id)a0 tintColorForRecipient:(id)a1;
- (id)_idsReachabilityDictionaryForRecipient:(id)a0;
- (BOOL)_isHandleReachable:(id)a0;
- (void)_prepareNextButton;
- (void)_selectionCompleted;
- (void)fetchIDSStatusForRecipient:(id)a0;

@end
