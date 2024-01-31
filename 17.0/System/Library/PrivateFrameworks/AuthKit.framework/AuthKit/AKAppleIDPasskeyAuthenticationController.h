@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AKAppleIDPasskeyAuthenticationController : NSObject <ASAuthorizationControllerDelegate, AKAppleIDPasskeyAuthenticationControllerProtocol> {
    NSObject<OS_dispatch_group> *_serializationGroup;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateByControllerLock;
    NSMapTable *_stateByController;
    NSObject<OS_dispatch_queue> *_passkeyRequestQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)_authorizationControllerForAccount:(id)a0;
- (void)_onqueue_authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1 error:(id)a2;
- (void)_onqueue_createPasskeyWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_popPasskeyRequestStateForController:(id)a0;
- (void)_pushPasskeyRequestState:(id)a0 forController:(id)a1;
- (void)appleIDPasskeyStatusForAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)appleIDPasskeysForAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)canCreateiCloudKeychainPasskeyForAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)createPasskeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllPasskeysForAccount:(id)a0 withCompletion:(id /* block */)a1;

@end
