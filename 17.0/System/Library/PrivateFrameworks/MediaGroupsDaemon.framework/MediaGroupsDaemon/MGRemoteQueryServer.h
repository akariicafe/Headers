@class NSArray, NSString, NSError, NSObject;
@protocol MGRemoteQueryServerDelegate, OS_dispatch_queue, OS_nw_listener;

@interface MGRemoteQueryServer : NSObject <MGRemoteQueryServerClientDelegate>

@property (retain, nonatomic) NSObject<OS_nw_listener> *listener;
@property (retain, nonatomic) NSArray *clients;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL invalidated;
@property (readonly, weak, nonatomic) id<MGRemoteQueryServerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSString *homeHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_handleNewConnection:(id)a0;
- (void)_invalidated;
- (void)_invalidate;
- (void)_startListener;
- (void).cxx_destruct;
- (unsigned long long)_transactionCount;
- (id)_clientAdd:(id)a0;
- (id)_clientFind:(id)a0;
- (void)_clientRemove:(id)a0;
- (unsigned int)_connectionLimit;
- (id)_prepareListenerAdvertisement;
- (void)_prepareListenerHTTP:(id)a0;
- (void)_prepareListenerHandlers;
- (id)_prepareListenerIdentity;
- (id)_prepareListenerParameters;
- (id /* block */)_prepareListenerTLS;
- (unsigned long long)_unsafe_transactionCount;
- (void)_updateConnectionLimit;
- (void)clientInvalidated:(id)a0;
- (void)clientLostTransaction:(id)a0;
- (id)initWithHomeHash:(id)a0 delegate:(id)a1 dispatchQueue:(id)a2;

@end
