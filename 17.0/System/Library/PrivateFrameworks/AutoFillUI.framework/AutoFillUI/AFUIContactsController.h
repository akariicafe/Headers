@class CNContactStore, CNContact, NSString, NSMutableArray;
@protocol AFUIContactPropertyPickerDelegate;

@interface AFUIContactsController : NSObject <CNContactPickerDelegate, CNContactViewControllerDelegate>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain) CNContact *me;
@property (retain) NSMutableArray *meDisplayNameObservers;
@property BOOL alwaysAllowsNamePicking;
@property (weak) id<AFUIContactPropertyPickerDelegate> contactPropertyPickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContactProperty:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)_loadMe;
- (id)contactsKeysForTextContentType:(id)a0;
- (id)_customInfoForContactProperty:(id)a0 useMultilineFallback:(BOOL)a1;
- (id)_meDisplayName;
- (void)addMeDisplayNameObserverAndGetInitialValue:(id)a0;
- (id)allContactsViewControllerForTextContentType:(id)a0;
- (void)copyAddressContactInfoFromContactInfo:(id)a0 toContactInfo:(id)a1;
- (void)copyPhoneContactInfoFromContactInfo:(id)a0 toContactInfo:(id)a1;
- (id)formattedDateForComponents:(id)a0;
- (id)meCardViewControllerForTextContentType:(id)a0;
- (id)meContactInfosForTextContentType:(id)a0;
- (void)removeMeDisplayNameObserver:(id)a0;
- (void)unifyPhoneNumberAndAddressDataAcrossContactInfos:(id)a0 withTextContentType:(id)a1;

@end
