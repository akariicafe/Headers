@class CNContactPickerViewController, NSString, PSSystemPolicyForApp, PSSpecifier, CNContactsProvider, UIPopoverController, NSMutableArray, UIAlertController, NSObject;
@protocol OS_dispatch_queue;

@interface ContactsSettingsPlugin : PSListController <PSSystemPolicyForAppDelegate, UIActionSheetDelegate, CNContactPickerDelegate, UIPopoverControllerDelegate> {
    void *_addressBook;
    NSMutableArray *_currentSpecifiers;
    PSSpecifier *_SIMImportSpacerSpecifier;
    PSSpecifier *_SIMImportSpecifier;
    PSSpecifier *_MeCardSpecifier;
    NSMutableArray *_contactStores;
    NSMutableArray *_contactStoreNames;
    long long _contactStoresCount;
    int _meCardLastCheckedSequenceNumber;
    struct __CTServerConnection { } *_ctServerConnection;
    UIAlertController *_loadingContacts;
    struct __CFDictionary { } *_importButtonIndexToStoreID;
    int _importStoreID;
    BOOL _shouldShowSIMImport;
    UIPopoverController *_meCardPopover;
    CNContactPickerViewController *_meCardPicker;
    NSObject<OS_dispatch_queue> *_addressBookQueue;
}

@property (retain, nonatomic) PSSystemPolicyForApp *appPolicy;
@property (retain, nonatomic) CNContactsProvider *provider;
@property (nonatomic) long long providerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)specifiers;
- (void).cxx_destruct;
- (struct __CTServerConnection { } *)_ctServerConnection;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)windowDidRotate:(id)a0;
- (void)windowWillRotate:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (BOOL)shouldLoadSpecifiersLazily;
- (void)showMeCardPicker:(id)a0;
- (void)_erroredDuringSIMPhonebookFetch;
- (id)contactStoreTitlesForSpecifier:(id)a0;
- (void)_clearSpecifiers;
- (void)_SIMStatusChanged;
- (void)_beginImportToStoreID:(int)a0;
- (void)setContactsSortOrder:(id)a0 specifier:(id)a1;
- (void)_dismissMeCardPickerAnimated:(BOOL)a0;
- (void)_fetchSIMPhonebook;
- (BOOL)_importAlreadyInProgress;
- (void)_noteImportEnded;
- (void)_noteImportStarted;
- (void)_phonebookAvailable;
- (void)_phonebookSelected;
- (void)_reloadMeCardCellIfVisible;
- (void)_rootControllerDidSuspend;
- (void)_setDefaultContacts:(id)a0 specifier:(id)a1;
- (void)_showMeCardPopover;
- (id)_simPhonebookEntryAtIndex:(int)a0;
- (void)_stopListeningForSIMPhonebookNotifications;
- (void)_synchronizeNanoUserDefault:(id)a0;
- (void)_updateABStoresAndNames;
- (void)_updateSIMImportSpecifier:(BOOL)a0;
- (void)_updateSIMImportVisibility;
- (id)contactsProviderCount:(id)a0;
- (id)contactsSortOrder:(id)a0;
- (id)defaultContactsName:(id)a0;
- (void)importFromSIM:(id)a0;
- (id)meCardName:(id)a0;
- (id)personNameOrder:(id)a0;
- (void)setDefaultContacts:(id)a0 specifier:(id)a1;
- (void)setPersonNameOrder:(id)a0 specifier:(id)a1;

@end
