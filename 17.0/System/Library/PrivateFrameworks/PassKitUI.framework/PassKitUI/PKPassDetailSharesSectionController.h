@class NSString, PKSharedPassSharesController;
@protocol PKPassDetailSharesSectionControllerDelegate;

@interface PKPassDetailSharesSectionController : PKPaymentPassDetailSectionController <PKSharedPassSharesControllerDelegate> {
    BOOL _hasLoadedInitialData;
    BOOL _mapped;
}

@property (readonly, nonatomic) PKSharedPassSharesController *sharesController;
@property (weak, nonatomic) id<PKPassDetailSharesSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validForPaymentPass:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)sectionIdentifiers;
- (void)sharedPassSharesControllerDidUpdateShares:(id)a0;
- (id)allSectionIdentifiers;
- (void)_updateSectionIdentifiersNotify:(BOOL)a0;
- (id)initWithSharesController:(id)a0 delegate:(id)a1;
- (void)preflight:(id /* block */)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;

@end
