@class NSString, AIDAServiceOwnersManager, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface AASignOutManager : NSObject <AIDAAccountManagerDelegate> {
    NSObject<OS_dispatch_queue> *_signOutQueue;
}

@property (retain, nonatomic) AIDAServiceOwnersManager *serviceOwnersManager;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) NSString *altDSIDToSignOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (id)accountsForAccountManager:(id)a0;
- (void).cxx_destruct;
- (id)_accountForService:(id)a0 matchingAltDSID:(id)a1 DSID:(id)a2;
- (void)_signOutOfAppleAccount:(id)a0 iTunesAccount:(id)a1 withServiceContext:(id)a2 completion:(id /* block */)a3;
- (void)_signOutSecondaryAccountsWithAltDSID:(id)a0 DSID:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)signOutOfAccount:(id)a0 completion:(id /* block */)a1;

@end
