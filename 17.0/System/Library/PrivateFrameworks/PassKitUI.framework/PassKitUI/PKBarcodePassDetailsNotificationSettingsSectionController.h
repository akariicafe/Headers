@class PKAccount, NSArray, NSString, PKPeerPaymentAccount, PKPaymentApplication, PKTransactionSourceCollection, PKPass;
@protocol PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate, PKPaymentDataProvider;

@interface PKBarcodePassDetailsNotificationSettingsSectionController : NSObject <PKTableViewSectionController> {
    PKPass *_pass;
    PKPaymentApplication *_paymentApplication;
    long long _detailViewStyle;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKAccount *_account;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKTransactionSourceCollection *_transactionSourceCollection;
}

@property (readonly, nonatomic) NSArray *allSectionIdentifiers;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, weak, nonatomic) id<PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_countOfRowsForPass:(id)a0;
+ (BOOL)canShowSectionforPass:(id)a0;
+ (BOOL)validForPass:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)_settingForRow:(unsigned long long)a0;
- (id)_cellForType:(long long)a0;
- (long long)_countOfRows;
- (id)_indexPathForRowType:(long long)a0;
- (void)_passSettingsChanged:(id)a0;
- (id)_settingsCellForRow:(unsigned long long)a0;
- (BOOL)_shouldMapSection;
- (long long)editingStyleForRowAtIndexPath:(id)a0 sectionIdentifier:(id)a1;
- (id)initWithPass:(id)a0 detailViewStyle:(long long)a1 delegate:(id)a2;
- (void)pushSettingsFromViewToModel;
- (BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)a0;
- (BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;

@end
