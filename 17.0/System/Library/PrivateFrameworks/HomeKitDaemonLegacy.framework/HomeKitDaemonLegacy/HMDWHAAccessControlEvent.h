@interface HMDWHAAccessControlEvent : HMMLogEvent

@property (nonatomic) BOOL isP2PEnabled;
@property (nonatomic) int privilegeLevel;
@property (nonatomic) BOOL isPasswordSet;

+ (int)awdUserPrivilegeFromHMUserPrivilege:(long long)a0;
+ (id)eventWithP2PEnabled:(BOOL)a0 privilegeLevel:(long long)a1 passwordSet:(BOOL)a2;

@end
