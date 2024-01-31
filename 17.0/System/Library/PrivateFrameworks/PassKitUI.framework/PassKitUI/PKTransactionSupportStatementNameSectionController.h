@class NSString;

@interface PKTransactionSupportStatementNameSectionController : PKPaymentSetupListSectionController {
    NSString *_merchantStatementName;
}

- (void).cxx_destruct;
- (id)_decorateListCell:(id)a0 forRowItem:(id)a1;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithMerchantStatementName:(id)a0;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
