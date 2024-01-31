@class NSString, NSArray, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMFNetworkBrowserDelegate;

@interface HMFNetworkBrowser : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_networkServices;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *internalBrowsers;
@property (weak, nonatomic) id<HMFNetworkBrowserDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSArray *serviceTypes;
@property (readonly, copy, nonatomic) NSArray *foundNetworkServices;

+ (id)logCategory;

- (id)stopBrowsing;
- (void).cxx_destruct;
- (id)startBrowsing;
- (void)_removeService:(id)a0;
- (id)browserDelegate;
- (void)_updateService:(id)a0;
- (void)_addService:(id)a0;
- (id)_startBrowsing;
- (id)_stopBrowsing;
- (id)initWithQueue:(id)a0 domain:(id)a1 serviceTypes:(id)a2;
- (id)startBrowsingWithTimeout:(double)a0;
- (id)workContext;

@end
