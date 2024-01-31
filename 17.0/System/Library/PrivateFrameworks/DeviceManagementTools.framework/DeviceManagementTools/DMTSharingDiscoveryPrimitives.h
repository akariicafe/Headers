@class NSMutableDictionary, NSString, SFDeviceDiscovery, NSObject;
@protocol OS_dispatch_queue;

@interface DMTSharingDiscoveryPrimitives : NSObject <CATSharingDiscoveryPrimitives>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *discoveryCallbackQueue;
@property (readonly, nonatomic) SFDeviceDiscovery *deviceDiscovery;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (retain, nonatomic) NSMutableDictionary *foundDevicesByIdentifier;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)deactivate;
- (id)sessionForDevice:(id)a0;
- (void)addDependencyHandlers;
- (void)handleDevice:(id)a0;

@end
