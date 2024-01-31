@class NSString, AFCompanionDeviceInfo;

@interface AFSharedUserInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sharedUserId;
@property (readonly, copy, nonatomic) NSString *loggableSharedUserId;
@property (readonly, copy, nonatomic) AFCompanionDeviceInfo *companionDeviceInfo;
@property (readonly, nonatomic) BOOL personalRequestsEnabled;
@property (readonly, nonatomic) BOOL companionLinkReady;
@property (readonly, copy, nonatomic) NSString *homeUserId;
@property (readonly, copy, nonatomic) NSString *iCloudAltDSID;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSharedUserId:(id)a0 loggableSharedUserId:(id)a1 companionDeviceInfo:(id)a2 personalRequestsEnabled:(BOOL)a3 companionLinkReady:(BOOL)a4 homeUserId:(id)a5 iCloudAltDSID:(id)a6;

@end
