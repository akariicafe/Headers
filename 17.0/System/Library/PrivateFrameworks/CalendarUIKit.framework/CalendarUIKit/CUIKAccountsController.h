@class ACAccountStore;

@interface CUIKAccountsController : NSObject {
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)invalidate;

- (id)accountTypeTitleForSource:(id)a0;
- (id)init;
- (void)dealloc;
- (id)accountStore;
- (void)_accountStoreDidChange:(id)a0;
- (void)_localeDidChange:(id)a0;
- (int)sortOrderForSource:(id)a0;
- (id)titleForSource:(id)a0 forBeginningOfSentence:(BOOL)a1;
- (BOOL)haveiCloudCalendarAccountInSources:(id)a0;
- (int)sortOrderForSourceType:(long long)a0;
- (void).cxx_destruct;
- (id)accountTypeTitleForSourceWithExternalId:(id)a0;
- (BOOL)sourceIsManaged:(id)a0;
- (id)_accountForAccountIdentifier:(id)a0;
- (id)_displayAccountForAccountWithIdentifier:(id)a0;
- (int)sortOrderForStoreType:(long long)a0;

@end
