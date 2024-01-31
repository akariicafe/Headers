@class NSData, NSObject;
@protocol OS_dispatch_queue;

@interface HDLegacyClinicalCredentialManager : NSObject {
    NSData *_cachedCredentialKey;
    NSObject<OS_dispatch_queue> *_credentialKeyQueue;
}

@property (copy, nonatomic) NSData *cachedCredentialKey;

- (id)init;
- (void).cxx_destruct;
- (id)_tokenDataFromToken:(id)a0 error:(out id *)a1;
- (BOOL)deleteCredentialKeyFromKeychainWithError:(id *)a0;
- (id)unitTesting_retrieveCredentialKeyFromKeychainWithError:(id *)a0;
- (BOOL)unitTesting_storeCredentialKeyInKeychain:(id)a0 error:(id *)a1;

@end
