@class PKPaymentPass;
@protocol PKPaymentPassDetailAutoReloadMerchantSectionControllerDelegate, PKPaymentPassDetailAutoReloadActionSectionControllerDelegate;

@interface PKPaymentPassDetailAutoReloadMerchantSectionController : PKPaymentPassDetailSectionController {
    PKPaymentPass *_pass;
    BOOL _isAutoTopEnabled;
    id<PKPaymentPassDetailAutoReloadMerchantSectionControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<PKPaymentPassDetailAutoReloadActionSectionControllerDelegate> setupDelegate;

+ (BOOL)validForPaymentPass:(id)a0;

- (void).cxx_destruct;
- (id)sectionIdentifiers;
- (id)allSectionIdentifiers;
- (id)initWithPass:(id)a0 delegate:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;

@end
