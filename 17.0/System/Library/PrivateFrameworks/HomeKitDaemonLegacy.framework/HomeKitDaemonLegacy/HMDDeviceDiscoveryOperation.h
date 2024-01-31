@class NSSet, NSString, HMDIDSSendMessageOperation, NSMutableSet, HMDAccount, NSObject;
@protocol HMDIDSService, OS_dispatch_queue;

@interface HMDDeviceDiscoveryOperation : HMFOperation <HMDIDSServiceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDIDSSendMessageOperation *_operation;
    NSMutableSet *_devices;
}

@property (readonly) id<HMDIDSService> service;
@property (readonly) HMDAccount *account;
@property (readonly, copy) NSSet *devices;
@property (copy) id /* block */ discoveryBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)timeout;
+ (id)logCategory;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initWithAccount:(id)a0;
- (void)main;
- (void)setQualityOfService:(long long)a0;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (id)initWithAccount:(id)a0 service:(id)a1 timeout:(double)a2;
- (id)initWithAccount:(id)a0 timeout:(double)a1;

@end
