@class NSString, ACAccount, AIDAAccountManager, AAUIGrandSlamRemoteUIPresenter;
@protocol DSNavigationDelegate;

@interface DSRemoteUILoader : NSObject <AAUIGrandSlamRemoteUIPresenterDelegate, AIDAAccountManagerDelegate, DSController> {
    AIDAAccountManager *_accountManager;
    ACAccount *_currentAccount;
    AAUIGrandSlamRemoteUIPresenter *_privacyRepairPresenter;
}

@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)accountsForAccountManager:(id)a0;
- (void).cxx_destruct;
- (void)remoteUIDidReceiveHTTPResponse:(id)a0;
- (void)remoteUIDidEndFlow:(id)a0;
- (void)remoteUIRequestComplete:(id)a0 error:(id)a1;
- (void)remoteUIWillLoadRequest:(id)a0;
- (void)remoteUIWillPresentObjectModel:(id)a0 modally:(BOOL)a1;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1 delegate:(id)a2;
- (id)initWithPresenter:(id)a0 delegate:(id)a1;
- (void)loadRemoteUI;

@end
