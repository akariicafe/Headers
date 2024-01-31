@class AFTwoArgumentSafetyBlock, NSString, NSUUID, AFAssertionContext, AFInstanceContext, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFAudioSessionAssertionConnection : NSObject <AFInvalidating, AFRelinquishableAssertion> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSXPCConnection *_xpcConnection;
    AFTwoArgumentSafetyBlock *_relinquishmentHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) AFAssertionContext *context;

- (void)dealloc;
- (id)_xpcConnection;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_acquireWithContext:(id)a0;
- (void)_clearXPCConnection;
- (void)_finalizeWithContext:(id)a0 error:(id)a1;
- (void)_relinquishWithContext:(id)a0 error:(id)a1 options:(unsigned long long)a2;
- (void)handleXPCConnectionInterrupted;
- (void)handleXPCConnectionInvalidated;
- (id)initWithInstanceContext:(id)a0 acquisitionContext:(id)a1 relinquishmentHandler:(id /* block */)a2;
- (void)relinquishWithContext:(id)a0 options:(unsigned long long)a1;
- (void)relinquishWithError:(id)a0 options:(unsigned long long)a1;

@end
