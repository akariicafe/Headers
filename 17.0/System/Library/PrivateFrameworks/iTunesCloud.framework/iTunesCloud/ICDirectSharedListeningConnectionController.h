@class MSVTaskAssertion, ICLiveLinkQRConnectionDataSource, NSString, MSVQRConnection, ICSharedListeningConnectionReport, NSObject;
@protocol OS_dispatch_queue;

@interface ICDirectSharedListeningConnectionController : ICSharedListeningConnectionController <MSVQRConnectionDelegate>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) long long state;
@property (retain, nonatomic) MSVQRConnection *connection;
@property (readonly, nonatomic) ICLiveLinkQRConnectionDataSource *dataSource;
@property (retain, nonatomic) ICSharedListeningConnectionReport *report;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) MSVTaskAssertion *assertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)connection:(id)a0 didReceiveMessage:(id)a1;
- (void)start;
- (void)stop;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)_handleQRDataSourceError:(id)a0;
- (void)connection:(id)a0 didEndWithError:(id)a1;
- (void)connectionDidStart:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 identity:(id)a1 bundleID:(id)a2;

@end
