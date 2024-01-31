@class NSObject, NSString, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface HMDSharingDeviceDiscovery : HMFObject <HMDSharingDeviceDiscovery>

@property (retain, nonatomic) SFDeviceDiscovery *deviceDiscovery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long discoveryFlags;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)repairDevice:(id)a0 flags:(unsigned int)a1 completion:(id /* block */)a2;

@end
