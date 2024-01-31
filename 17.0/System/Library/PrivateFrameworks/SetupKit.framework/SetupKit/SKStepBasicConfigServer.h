@class SKSetupBase, NSString, NSObject;
@protocol OS_dispatch_queue, CUMessaging;

@interface SKStepBasicConfigServer : NSObject <SKStepable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id /* block */ _responseHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ skCompletionHandler;
@property (retain, nonatomic) id<CUMessaging> skMessaging;
@property (weak, nonatomic) SKSetupBase *skSetupObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_activate;
- (void)_invalidated;
- (void)_completeWithError:(id)a0;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)_handleRequestBasicConfig:(id)a0 responseHandler:(id /* block */)a1;

@end
