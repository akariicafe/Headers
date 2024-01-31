@class NSString, CTConnectionPair, CTStewieStateMonitor, NSObject, CTStewieState;
@protocol OS_dispatch_queue, CTStewieDataClientDelegate;

@interface CTStewieDataClient : NSObject <CTStewieStateMonitorDelegate, CTConnectionPairDelegate> {
    BOOL fStarted;
    NSObject<OS_dispatch_queue> *fQueue;
    long long fRequestedServices;
    long long fConnectedServices;
    id<CTStewieDataClientDelegate> fDelegate;
    NSObject<OS_dispatch_queue> *fDelegateQueue;
    CTConnectionPair *fConnectionPair;
    long long fConnectionPairState;
    CTStewieState *fState;
    CTStewieStateMonitor *fMonitor;
    struct map<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>, std::less<std::string>, std::allocator<std::pair<const std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>>> { struct __tree<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::__map_value_compare<std::string, std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } fOutgoingMessages;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)start;
- (void)sendMessageInternal:(id)a0 usingConnection:(long long)a1 completion:(id /* block */)a2;
- (void)receivedData:(id)a0 fromConnectionId:(long long)a1;
- (id)getState;
- (void)invokeSendCompletionForMsgId:(id)a0 ack:(id)a1 metadata:(id)a2;
- (id).cxx_construct;
- (void)stateChanged:(id)a0;
- (void)discardConnectionPairIfRequired;
- (void).cxx_destruct;
- (void)createConnectionPairIfRequired;
- (id)initWithServices:(long long)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)connectionPairStateChanged:(long long)a0;
- (void)reEvaluate;
- (void)failAllPendingMessages;
- (void)dispatchOnDelegateQueue:(id /* block */)a0;
- (void)updateConnectedServices:(long long)a0;
- (BOOL)sendMessage:(id)a0 completion:(id /* block */)a1;

@end
