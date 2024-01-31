@class NSString, FBSOrientationObserverClient, FBSOrientationUpdate, NSObject;
@protocol OS_dispatch_queue;

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate, BSInvalidatable> {
    FBSOrientationObserverClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callback_queue;
    id /* block */ _handler;
    FBSOrientationUpdate *_freshestUpdate;
}

@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)activeInterfaceOrientation;
- (id)init;
- (void)dealloc;
- (void)client:(id)a0 handleOrientationUpdate:(id)a1;
- (id)_getAndSetFreshestUpdateGivenUpdate:(id)a0;
- (void)invalidate;
- (void)handleOrientationResetForClient:(id)a0;
- (void).cxx_destruct;
- (void)activeInterfaceOrientationWithCompletion:(id /* block */)a0;

@end
