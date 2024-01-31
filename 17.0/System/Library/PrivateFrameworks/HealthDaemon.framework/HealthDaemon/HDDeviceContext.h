@class NSString, HDSyncIdentity, NSDate;

@interface HDDeviceContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *currentOSName;
@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } currentOSVersion;
@property (readonly, copy, nonatomic) NSString *productTypeName;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) HDSyncIdentity *syncIdentity;

+ (id)localProductTypeEnumWithError:(id *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initForLocalDeviceWithType:(long long)a0 syncIdentity:(id)a1;
- (id)initWithType:(long long)a0 productTypeName:(id)a1 currentOSName:(id)a2 currentOSVersion:(struct { long long x0; long long x1; long long x2; })a3 modificationDate:(id)a4 syncIdentity:(id)a5;

@end
