@class NSError, NSURLRequest, NSObject;
@protocol OS_dispatch_queue, OS_nw_connection, MGRemoteQueryServerHandlerProtocol, OS_os_transaction, MGRemoteQueryServerTransactionDelegate, OS_nw_content_context;

@interface MGRemoteQueryServerTransaction : NSObject

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSObject<OS_nw_content_context> *responseContext;
@property (retain, nonatomic) NSObject<MGRemoteQueryServerHandlerProtocol> *handler;
@property (readonly, weak, nonatomic) id<MGRemoteQueryServerTransactionDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *connection;

- (void)dealloc;
- (void)_invalidated;
- (void)_invalidate;
- (void)_updateState:(unsigned long long)a0;
- (void)_handleError:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_responseEnd;
- (void)_responseStart;
- (void)_delegateNotifyTimeoutInterval:(unsigned long long)a0;
- (void)_delegateNotifyActivityOccurred;
- (void)_handleNWError:(id)a0;
- (void)_delegateNotifyInvalidated;
- (id)_handlerForRequest:(id)a0;
- (void)_prepareConnection;
- (void)_requestParse:(id)a0;
- (void)_requestProcess:(id)a0;
- (void)_requestRead;
- (BOOL)_requestValidate;
- (void)_responseAppend:(id)a0;
- (void)_responseHandlePayloadFromHandler:(id)a0 error:(id)a1;
- (void)_responseObtainPayloadFromHandler;
- (id)initWithConnection:(id)a0 delegate:(id)a1 dispatchQueue:(id)a2;

@end
