@class NSString, BKOperation, _LABKDevice, NSObject;
@protocol OS_dispatch_queue, BKOperationDelegate;

@interface _LABKOperation : NSObject <BKOperationDelegate>

@property (readonly, nonatomic) BKOperation *_BKOperation;
@property (readonly, nonatomic) _LABKDevice *device;
@property (weak, nonatomic) id<BKOperationDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long state;
@property (nonatomic) BOOL isUserPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_wrapperForBKOperation:(id)a0 device:(id)a1;

- (void)dealloc;
- (BOOL)startWithError:(id *)a0;
- (void)startWithReply:(id /* block */)a0;
- (void)operation:(id)a0 presenceStateChanged:(BOOL)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)operation:(id)a0 finishedWithReason:(long long)a1;
- (void)operation:(id)a0 stateChanged:(long long)a1;
- (id)shim;
- (void)dispatchDelegateSelector:(SEL)a0 block:(id /* block */)a1;
- (id)_initWithBKOperation:(id)a0 device:(id)a1;

@end
