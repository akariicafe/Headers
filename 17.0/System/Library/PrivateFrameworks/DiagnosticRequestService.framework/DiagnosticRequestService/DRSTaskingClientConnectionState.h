@class NSMutableDictionary;

@interface DRSTaskingClientConnectionState : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BOOL hasAdminEntitlement;
@property (readonly, nonatomic) NSMutableDictionary *cachedEntitlements;

- (void)dealloc;
- (id)initWithConnection:(id)a0 service:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasTeamIDEntitlement:(id)a0 connection:(id)a1;

@end
