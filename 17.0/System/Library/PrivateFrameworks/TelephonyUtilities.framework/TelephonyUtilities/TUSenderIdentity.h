@class NSUUID, TUHandle, NSString;

@interface TUSenderIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSUUID *accountUUID;
@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *ISOCountryCode;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedShortName;
@property (readonly, copy, nonatomic) NSString *localizedServiceName;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 accountUUID:(id)a1 localizedName:(id)a2 localizedShortName:(id)a3 localizedServiceName:(id)a4 handle:(id)a5;
- (id)initWithSenderIdentity:(id)a0;
- (id)initWithUUID:(id)a0 accountUUID:(id)a1 ISOCountryCode:(id)a2 localizedName:(id)a3 localizedShortName:(id)a4 localizedServiceName:(id)a5 handle:(id)a6;
- (id)initWithUUID:(id)a0 accountUUID:(id)a1 localizedName:(id)a2 localizedShortName:(id)a3 handle:(id)a4;
- (BOOL)isEqualToSenderIdentity:(id)a0;

@end
