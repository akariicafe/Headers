@class NSMutableArray, NSOperationQueue, NSDate, SKUIMediaSocialProfile, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIMediaSocialProfileCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_lastAuthenticationAttempt;
    SKUIMediaSocialProfile *_lastKnownProfile;
    NSDate *_lastRequestDate;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_profileBlocks;
    BOOL _waitingForAuthentication;
}

+ (id)sharedCoordinator;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_requestProfile;
- (void)_accountStoreChangeNotification:(id)a0;
- (void)_authenticateOnCompletion:(id /* block */)a0;
- (void)_fireProfileBlocksWithProfile:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (void)_handleOperationResponseWithProfile:(id)a0 error:(id)a1;
- (void)_queueProfileBlock:(id /* block */)a0;
- (void)getProfileWithOptions:(id)a0 profileBlock:(id /* block */)a1;

@end
