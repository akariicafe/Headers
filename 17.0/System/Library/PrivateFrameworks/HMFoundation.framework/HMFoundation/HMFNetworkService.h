@class HMFNetworkServiceInfo, NSString, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_nw_connection;

@interface HMFNetworkService : HMFObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *ipAddresses;
@property (retain, nonatomic) NSObject<OS_nw_connection> *nwConnection;
@property (readonly, nonatomic) HMFNetworkServiceInfo *serviceInfo;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *hostName;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) NSArray *addresses;

+ (id)logCategory;

- (void)dealloc;
- (void)updateWithService:(id)a0;
- (id)shortDescription;
- (void)invalidate;
- (id)description;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithServiceInfo:(id)a0 port:(unsigned short)a1 queue:(id)a2;
- (id)_connectionWithPromise:(id)a0 parameters:(id)a1 receivedDataHandler:(id /* block */)a2;
- (BOOL)_updateDeviceWithPath:(id)a0;
- (id)initWithTXTRecords:(id)a0 browseResult:(id)a1 queue:(id)a2;
- (id)resolveAddressWithAddressType:(unsigned long long)a0 timeout:(double)a1 receivedDataHandler:(id /* block */)a2;

@end
