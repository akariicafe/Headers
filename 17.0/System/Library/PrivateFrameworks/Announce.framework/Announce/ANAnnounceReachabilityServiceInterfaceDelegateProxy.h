@class NSString;
@protocol ANAnnounceReachabilityServiceInterfaceDelegate;

@interface ANAnnounceReachabilityServiceInterfaceDelegateProxy : NSObject <ANAnnounceReachabilityServiceInterfaceDelegate>

@property (weak, nonatomic) id<ANAnnounceReachabilityServiceInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForHomeName:(id)a1;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForHomeUUID:(id)a1;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForRoomName:(id)a1 inHomeName:(id)a2;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForRoomUUID:(id)a1 inHomeUUID:(id)a2;

@end
