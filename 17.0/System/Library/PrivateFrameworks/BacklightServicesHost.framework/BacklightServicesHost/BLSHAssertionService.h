@class BLSHXPCAssertionServiceHostServer, BLSHLocalAssertionService;

@interface BLSHAssertionService : NSObject {
    BLSHXPCAssertionServiceHostServer *_server;
}

@property (readonly, nonatomic) BLSHLocalAssertionService *localAssertionService;

+ (id)serviceWithOSInterfaceProvider:(id)a0 localOnly:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithOSInterfaceProvider:(id)a0 localOnly:(BOOL)a1;

@end
