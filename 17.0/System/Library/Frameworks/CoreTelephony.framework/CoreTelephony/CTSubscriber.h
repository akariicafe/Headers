@class NSString, NSData, CoreTelephonyClient, CTServiceDescriptor;
@protocol CTSubscriberDelegate;

@interface CTSubscriber : NSObject <CoreTelephonyClientSubscriberDelegateInternal> {
    struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } _queue;
    CoreTelephonyClient *_client;
}

@property (retain, nonatomic) CTServiceDescriptor *descriptor;
@property (readonly, retain, nonatomic) NSData *carrierToken;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<CTSubscriberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDescriptor:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_isValidMCCMNCString:(id)a0 max:(unsigned long long)a1 min:(unsigned long long)a2;
- (void)authTokenChanged:(id)a0;
- (void)authenticate:(id)a0 completion:(id /* block */)a1;
- (void)authenticateWithInfo:(id)a0 handleResult:(id /* block */)a1;
- (id)carrierToken;
- (id)initWithDescriptor:(id)a0 client:(id)a1;
- (BOOL)refreshCarrierToken;
- (BOOL)simInserted;
- (id)typeAllocationCode;

@end
