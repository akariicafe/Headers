@class NSObject, IMURLRequestSession, IMConnectionMonitor, IDSServerBagConfig;
@protocol OS_dispatch_queue;

@interface IDSServerBagNetworkLoader : NSObject <IMConnectionMonitorDelegate>

@property (retain, nonatomic) IDSServerBagConfig *config;
@property (copy, nonatomic) id /* block */ connectionMonitorBlock;
@property (copy, nonatomic) id /* block */ URLSessionCreationBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) IMConnectionMonitor *connectionMonitor;
@property (retain, nonatomic) IMURLRequestSession *URLRequestSession;
@property (nonatomic) unsigned long long loaderState;
@property (copy, nonatomic) id /* block */ storedCompletion;
@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) BOOL isServerAvailable;

- (void)dealloc;
- (void)connectionMonitorDidUpdate:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 queue:(id)a1 connectionMonitorBlock:(id /* block */)a2 URLSessionCreationBlock:(id /* block */)a3;
- (void)loadBagIfPossibleWithCompletion:(id /* block */)a0;

@end
