@class PKAccount;

@interface PKAccountSupportSectionController : PKPaymentSetupListSectionController {
    PKAccount *_account;
}

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)_decorateListCell:(id)a0 forRowItem:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
