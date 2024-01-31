@class NSString, _UIAsyncInvocation, NSMutableDictionary, NSMutableSet, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    _UIAsyncInvocation *_invalidationInvocation;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    NSMutableSet *_deputies;
}

@property id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)a0;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)_objc_initiateDealloc;
- (void)__requestConnectionToDeputyOfClass:(Class)a0 fromHostObject:(byref id)a1 replyHandler:(id /* block */)a2;
- (void)_invalidateUnconditionallyThen:(id /* block */)a0;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)a0 replyHandler:(id /* block */)a1;
- (Class)_deputyClassForConnectionSelector:(SEL)a0;
- (void)checkDeputyForRotation:(id)a0;
- (void)registerDeputyClass:(Class)a0 withConnectionHandler:(id /* block */)a1;
- (void)unregisterDeputyClass:(Class)a0;
- (void)viewControllerOperator:(id)a0 didCreateServiceViewControllerOfClass:(Class)a1;

@end
