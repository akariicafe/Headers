@class SKUIFacebookLikeStatus, SKUIViewElementLayoutContext, SKUIReviewsFacebookView, ACAccountStore, SKUIFacebookPageComponent;

@interface SKUIFacebookPageSection : SKUIStorePageSection {
    ACAccountStore *_accountStore;
    char _facebookAccountsExist;
    SKUIReviewsFacebookView *_facebookView;
    BOOL _isLoadingLikeStatus;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIFacebookLikeStatus *_likeStatus;
}

@property (readonly, nonatomic) SKUIFacebookPageComponent *pageComponent;

- (void)dealloc;
- (void)_accountStoreDidChangeNotification:(id)a0;
- (id)_accountStore;
- (void)_resetState;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)_applyColorSchemeToFacebookView:(id)a0;
- (void)_changeStatusToUserLiked:(BOOL)a0;
- (long long)_facebookAccountsExist;
- (id)_facebookView;
- (void)_finishLookupWithStatus:(id)a0 error:(id)a1;
- (void)_reloadCollectionViewSection;
- (void)_reloadLikeStatus;
- (void)_toggleLikeAction:(id)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (long long)applyUpdateType:(long long)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;

@end
