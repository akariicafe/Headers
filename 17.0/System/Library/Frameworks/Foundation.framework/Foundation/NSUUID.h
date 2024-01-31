@class NSString;

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *UUIDString;

+ (id)_LS_UUIDWithData:(id)a0 digestType:(long long)a1;
+ (id)_LS_nullUUID;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)UUID;
+ (BOOL)_compatibilityBehavior;

- (id)init;
- (unsigned long long)hash;
- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (id)initWithUUIDString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (Class)classForCoder;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getUUIDBytes:(unsigned char[16])a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct __CFString { } *)_cfUUIDString;

@end
