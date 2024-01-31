@class AFDeviceContextConnection, NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue, AFContextDonation;

@interface AFContextDonationService : NSObject <AFDeviceContextConnectionDelegate, AFContextDonation> {
    NSMapTable *_transformersByType;
    AFDeviceContextConnection *_connection;
    id<AFContextDonation> _donationService;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultService;

- (id)_connection;
- (id)_init;
- (void).cxx_destruct;
- (void)deviceContextConnectionDidInvalidate:(id)a0;
- (void)donateContext:(id)a0 withMetadata:(id)a1 pushToRemote:(BOOL)a2;
- (void)donateContext:(id)a0 withMetadata:(id)a1 pushToRemote:(BOOL)a2 completion:(id /* block */)a3;
- (void)registerContextTransformer:(id)a0 forType:(id)a1;
- (void)setDonationService:(id)a0;

@end
