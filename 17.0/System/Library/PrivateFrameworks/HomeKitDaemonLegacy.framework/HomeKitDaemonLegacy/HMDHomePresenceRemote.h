@class NSDictionary, NSString;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>

@property (readonly, nonatomic) NSDictionary *userPresenceMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)areUsersAtHome:(id)a0;
- (BOOL)isAnyUserAtHome;
- (BOOL)areUsersNotAtHome:(id)a0;
- (id)initWithPresenceByPairingIdentity:(id)a0;
- (id)initWithPresenceByUserId:(id)a0;
- (BOOL)isNoUserAtHome;
- (BOOL)isUserAtHome:(id)a0;
- (BOOL)isUserNotAtHome:(id)a0;
- (id)regionForUser:(id)a0;

@end
