@class NSHashTable, WBSAutoFillAssociatedDomainsManager, IMOneTimeCodeAccelerator, SFAutoFillOneTimeCode, NSTimer, NSObject, EMOneTimeCodeAccelerator, NSMapTable;
@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    IMOneTimeCodeAccelerator *_messagesOneTimeCodeAccelerator;
    EMOneTimeCodeAccelerator *_mailOneTimeCodeAccelerator;
    BOOL _isOneTimeCodeAutoDeletionEnabled;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFAutoFillOneTimeCode *_currentReceivedOneTimeCode;
    NSHashTable *_observers;
    NSMapTable *_generatorObservers;
    NSTimer *_generatorTimer;
}

@property (weak, nonatomic) id<SFAppAutoFillOneTimeCodeProviderDelegate> delegate;
@property (retain, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (nonatomic) BOOL isOneTimeCodeAutoDeletionEnabled;

- (id)currentOneTimeCodesWithAppIdentifier:(id)a0 website:(id)a1 usernameHint:(id)a2 fieldClassification:(long long)a3;
- (void)_notifyOneTimeCodeObserver;
- (id)init;
- (id)_savedAccountsWithPasswordsForURL:(id)a0 inContext:(id)a1;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)a0 fieldClassification:(long long)a1;
- (void)removeObserver:(id)a0;
- (void)_validateCurrentOneTimeCode;
- (void)_processOneTimeCodeFromMessages:(id)a0;
- (void)didFocusOneTimeCodeField;
- (void)_processOneTimeCodeFromMail:(id)a0 withTimestamp:(id)a1 andMessageID:(long long)a2;
- (id)_associatedDomainEntriesForAppWithIdentifier:(id)a0;
- (id)_secureURLWithDomain:(id)a0;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)a0 fieldClassification:(long long)a1 inContext:(id)a2;
- (id)_sortedOneTimeCodesFromSavedAccounts:(id)a0;
- (BOOL)_validateURL:(id)a0 withURLFromOriginBoundCode:(id)a1;
- (void).cxx_destruct;
- (id)initWithMessagesOneTimeCodeSupport:(BOOL)a0;
- (void)consumeOneTimeCode:(id)a0;
- (void)addObserver:(id)a0 forOneTimeCode:(id)a1;
- (void)consumeMessagesOneTimeCodeWithGUID:(id)a0;
- (id)currentOneTimeCodesWithAuditToken:(struct { unsigned int x0[8]; })a0 website:(id)a1 usernameHint:(id)a2 fieldClassification:(long long)a3;
- (void)removeObserverForOneTimeCode:(id)a0;
- (void)_fetchOneTimeCodeAutoDeletionPreference;
- (void)_stopGeneratorTimer;
- (void)consumeCurrentOneTimeCode;
- (void)_startGeneratorTimer;
- (void)addObserver:(id)a0;
- (BOOL)hasOneTimeCodeForAppWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)_appWithAppIdentifierIsWebBrowser:(id)a0;

@end
