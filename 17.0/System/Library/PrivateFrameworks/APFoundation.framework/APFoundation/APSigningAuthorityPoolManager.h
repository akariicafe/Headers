@class NSObject, NSMutableDictionary, APSigningContextsStorage, APUnfairLock, NSString, NSMutableArray, APSigningAuthority;
@protocol OS_dispatch_queue;

@interface APSigningAuthorityPoolManager : NSObject <APSigningAuthorityPoolManagement>

@property (nonatomic) int poolSize;
@property (nonatomic) int successfulSigningAuthorities;
@property (retain, nonatomic) APSigningAuthority *currentSigningAuthority;
@property (retain, nonatomic) NSMutableArray *signingAuthorityPool;
@property (retain, nonatomic) APUnfairLock *lock;
@property (retain, nonatomic) APSigningContextsStorage *signingContextsStorage;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long rotationClosureTokenCounter;
@property (retain, nonatomic) NSMutableDictionary *rotationClosures;
@property (nonatomic) double timerInterval;
@property (nonatomic) BOOL refillDisabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *retryQueue;
@property (nonatomic) double lastStateChangeTime;
@property (nonatomic) double refillStartTime;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (void)_addSigningAuthorityToPool:(id)a0;
- (void)_evaluatePoolSize:(int)a0;
- (void)_evaluateRotationEntitlement;
- (void)_handleFailedSigningAuthority:(id)a0;
- (void)_handleSuccessfulSigningAuthority:(id)a0;
- (int)_numSigningAuthoritiesToCreate;
- (void)_refillSigningAuthorityPool;
- (void)_refillSigningAuthorityPoolFromStashedContexts;
- (void)_removeAllSigningAuthorities;
- (void)_removeNotificationObserverForSigningAuthority:(id)a0;
- (void)_removeSigningAuthority:(id)a0 shouldRefill:(BOOL)a1;
- (BOOL)_rotateWithError:(id *)a0;
- (void)_signingAuthorityStateChanged:(id)a0;
- (void)_validateSigningAuthority:(id)a0;
- (id)initWithPoolSize:(int)a0;
- (id)initWithPoolSize:(int)a0 completionHandler:(id /* block */)a1;
- (id)registerHandlerForRotation:(id /* block */)a0;
- (void)removeHandlerForRotation:(id)a0;
- (BOOL)rotateWithError:(id *)a0;
- (id)signatureForData:(id)a0 error:(id *)a1;
- (id)signatureForRawData:(id)a0 error:(id *)a1;

@end
