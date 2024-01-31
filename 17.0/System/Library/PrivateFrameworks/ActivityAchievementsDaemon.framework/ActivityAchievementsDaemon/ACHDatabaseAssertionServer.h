@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ACHDatabaseAssertionServer : HDStandardTaskServer <ACHDatabaseAssertionServerInterface>

@property (retain, nonatomic) NSMutableDictionary *assertionByToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)dealloc;
- (void)remote_acquireDatabaseAssertionWithIdentifier:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)remote_invalidateAssertionWithToken:(id)a0 completion:(id /* block */)a1;
- (void)_queue_cleanup;

@end
