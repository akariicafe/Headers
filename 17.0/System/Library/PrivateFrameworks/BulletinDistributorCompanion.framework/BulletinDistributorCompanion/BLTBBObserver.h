@class NSObject, NSString, BLTBBObserverDelegate, NSLock, BBObserver;
@protocol OS_dispatch_queue;

@interface BLTBBObserver : NSObject <BLTBBObserverDelegateDelegate> {
    BBObserver *_actualObserver;
    NSLock *_actualObserverLock;
    BLTBBObserverDelegate *_delegateSurrogate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_name;
    unsigned long long _priority;
    BOOL _isGateway;
    unsigned long long _observerFeed;
    BOOL _hasFeed;
}

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)surrogateGatewayWithQueue:(id)a0 calloutQueue:(id)a1 name:(id)a2 priority:(unsigned long long)a3;
+ (id)surrogateWithQueue:(id)a0 calloutQueue:(id)a1;

- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (void)setObserverFeed:(unsigned long long)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_reconnectObserver;
- (id)initWithQueue:(id)a0 calloutQueue:(id)a1 name:(id)a2 priority:(unsigned long long)a3 isGateway:(BOOL)a4;
- (void)noteServerConnectionStateChanged:(BOOL)a0;

@end
