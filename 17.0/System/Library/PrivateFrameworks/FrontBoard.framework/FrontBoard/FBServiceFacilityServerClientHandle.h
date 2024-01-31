@class NSString, RBSProcessIdentity, FBProcess, BSProcessHandle, BSServiceConnection;
@protocol BSXPCServiceConnectionMessaging, FBSServiceFacilityClientContext;

@interface FBServiceFacilityServerClientHandle : NSObject <FBSServiceFacilityClientHandle_Internal, BSInvalidatable> {
    BSServiceConnection *_connection;
    FBProcess *_process;
}

@property (readonly, nonatomic) id<BSXPCServiceConnectionMessaging> clientHandle_messageBuilder;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BSProcessHandle *processHandle;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, copy, nonatomic) NSString *facilityID;
@property (retain, nonatomic) id<FBSServiceFacilityClientContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithFacilityID:(id)a0 connection:(id)a1;
- (id)prettyProcessDescription;

@end
