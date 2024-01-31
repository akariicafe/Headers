@class PKPaymentPass, PKPeerPaymentAccount, PKTransactionSourceCollection, PKPaymentApplication, PKAccount;
@protocol PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate, PKPaymentDataProvider;

@interface PKPaymentPassDetailsNotificationSettingsSectionController : PKPaymentPassDetailSectionController {
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    long long _detailViewStyle;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKAccount *_account;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKTransactionSourceCollection *_transactionSourceCollection;
}

@property (readonly, nonatomic) long long notificationAuthorizationStatus;
@property (readonly, weak, nonatomic) id<PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate> delegate;

+ (long long)_countOfRowsForPass:(id)a0 peerPaymentAccount:(id)a1 account:(id)a2;
+ (BOOL)_showsTransactionHistorySwitchForPass:(id)a0 peerPaymentAccount:(id)a1 account:(id)a2;
+ (id)_updatedPeerPaymentAccountForPeerPaymentAccount:(id)a0 pass:(id)a1;
+ (BOOL)canShowSectionforPass:(id)a0 dataProvider:(id)a1 peerPaymentAccount:(id)a2 account:(id)a3 transactionSourceCollection:(id)a4;
+ (BOOL)validForPaymentPass:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)sectionIdentifiers;
- (id)allSectionIdentifiers;
- (unsigned long long)_accountFeature;
- (id)_accountServiceNotificationsSwitchCellForIndexPath:(id)a0 tableView:(id)a1;
- (id)_cellForType:(long long)a0;
- (long long)_countOfRows;
- (void)_dailyCashSwitchChanged:(id)a0;
- (id)_indexPathForRowType:(long long)a0;
- (void)_notificationSwitchChanged:(id)a0;
- (void)_passSettingsChanged:(id)a0;
- (id)_peerPaymentNotificationsSwitchCellForIndexPath:(id)a0 tableView:(id)a1;
- (BOOL)_shouldMapSection;
- (id)_transactionsSwitchCellForIndexPath:(id)a0 tableView:(id)a1;
- (void)_transactionsSwitchChanged:(id)a0;
- (void)fetchAuthorizationStatusWithCompletion:(id /* block */)a0;
- (id)initWithPass:(id)a0 peerPaymentAccount:(id)a1 account:(id)a2 paymentDataProvider:(id)a3 transactionSourceCollection:(id)a4 detailViewStyle:(long long)a5 delegate:(id)a6;
- (void)setTransactionsEnabled:(BOOL)a0;
- (BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)a0;
- (BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)titleForFooterInSectionIdentifier:(id)a0;
- (id)titleForHeaderInSectionIdentifier:(id)a0;

@end
