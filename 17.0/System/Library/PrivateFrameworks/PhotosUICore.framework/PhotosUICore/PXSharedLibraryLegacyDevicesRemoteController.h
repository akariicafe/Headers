@class NSString, ACAccount, AIDAAccountManager, AAUIGrandSlamRemoteUIPresenter;

@interface PXSharedLibraryLegacyDevicesRemoteController : PXObservable <AAUIGrandSlamRemoteUIPresenterDelegate, AIDAAccountManagerDelegate> {
    AIDAAccountManager *_accountManager;
    ACAccount *_currentAccount;
    AAUIGrandSlamRemoteUIPresenter *_remoteUIPresenter;
}

@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)legacyDevicesRemoteControllerIfEnabledWithSharedLibraryOrPreviewPresent:(BOOL)a0;

- (id)init;
- (id)_init;
- (id)accountsForAccountManager:(id)a0;
- (void).cxx_destruct;
- (void)_updateStateOnMainQueue:(long long)a0;
- (void)beginRemoteUIRequestWithPresenter:(id)a0;
- (void)remoteUIDidEndFlow:(id)a0;
- (void)remoteUIRequestComplete:(id)a0 error:(id)a1;
- (void)remoteUIWillLoadRequest:(id)a0;
- (void)remoteUIWillPresentObjectModel:(id)a0 modally:(BOOL)a1;

@end
