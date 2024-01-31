@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SKAAccountProvider : NSObject <SKAAccountProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tokenFetchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)init;
- (void)refreshCredentialForPrimaryAccountWithCompletion:(id /* block */)a0;
- (id)_jwtTokenForPrimaryAccountForIdentifier:(id)a0 withError:(id *)a1;
- (long long)_maxReauthCount;
- (id)_primarySystemiCloudAccountWithError:(id *)a0;
- (long long)_authResetTime;
- (BOOL)_shouldAttemptReauth;
- (void).cxx_destruct;
- (void)_markReauthAttempt;
- (id)presenceJwtTokenForPrimaryAccountWithError:(id *)a0;
- (id)statusJwtTokenForPrimaryAccountWithError:(id *)a0;

@end
