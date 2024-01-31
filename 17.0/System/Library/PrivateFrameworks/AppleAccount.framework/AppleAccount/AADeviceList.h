@class NSArray, NSError, AIDAAccountManager, AKAppleIDAuthenticationController;
@protocol AADeviceListDelegate;

@interface AADeviceList : NSObject {
    AKAppleIDAuthenticationController *_authController;
    AIDAAccountManager *_accountManager;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSError *loadError;
@property (weak, nonatomic) id<AADeviceListDelegate> delegate;

- (void)refreshDeviceList;
- (id)_accountStore;
- (id)_appleAccount;
- (void)_renewCredentials;
- (void)_setDeviceList:(id)a0 loadError:(id)a1;
- (void)_createRequestForAccount:(id)a0 requestHandler:(id /* block */)a1;
- (id)_authController;
- (void).cxx_destruct;
- (void)_loadDeviceList;
- (void)_loadRequest:(id)a0 responseHandler:(id /* block */)a1;
- (id)initWithAccountManager:(id)a0;
- (id)_aidaAccount;

@end
