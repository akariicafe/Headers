@class NSUUID, NSString;
@protocol MTSXPCConnection;

@interface MTSXPCServerProxy : HMFObject <HMFLogging, MTSXPCServerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly) id /* block */ connectionFactory;
@property (retain, nonatomic) id<MTSXPCConnection> connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (id)initWithConnectionFactory:(id /* block */)a0;
- (void)invalidate;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)checkRestrictedCharacteristicsAccessAllowedWithCompletionHandler:(id /* block */)a0;
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)a0;
- (void)openCommissioningWindowForSystemCommissionerPairingUUID:(id)a0 duration:(double)a1 completionHandler:(id /* block */)a2;
- (void)readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDevicePairingWithUUID:(id)a0 forSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeSystemCommissionerPairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)showRestrictedCharacteristicsAccessWarningAlert;
- (void)performDeviceSetupUsingRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
