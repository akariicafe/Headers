@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_nw_browser;

@interface _HMFNetworkBrowser : HMFObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_nw_browser> *nw_browser;
@property (copy, nonatomic) id /* block */ updateBlock;

+ (id)logCategory;

- (id)stopBrowsing;
- (id)shortDescription;
- (void)stop;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)startBrowsing;
- (id)initWithQueue:(id)a0 domain:(id)a1 serviceType:(id)a2 updateBlock:(id /* block */)a3;
- (id)workContext;

@end
