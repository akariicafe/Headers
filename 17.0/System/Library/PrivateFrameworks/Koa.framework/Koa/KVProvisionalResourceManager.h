@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface KVProvisionalResourceManager : NSObject {
    NSString *_resourceName;
    NSObject<OS_dispatch_queue> *_activationQueue;
    NSObject<OS_dispatch_queue> *_expirationQueue;
    NSObject<OS_dispatch_queue> *_operationQueue;
    double _expirationInterval;
    BOOL _isActive;
    id /* block */ _activationBlock;
    id /* block */ _deactivationBlock;
    long long _operationsInProgress;
}

@property (retain) NSDate *expirationDate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isActive;
- (long long)activateWithError:(id *)a0 operationBlock:(id /* block */)a1;
- (long long)deactivateWithError:(id *)a0;
- (id)initWithResourceName:(id)a0 lifespan:(double)a1 activationBlock:(id /* block */)a2 deactivationBlock:(id /* block */)a3 serializeOperations:(BOOL)a4;
- (void)_setExpirationTimer;
- (void)activateAsyncWithCompletion:(id /* block */)a0;

@end
