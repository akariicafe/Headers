@class NSUUID;

@interface HKProfileIdentifier : NSObject <NSSecureCoding, NSCopying> {
    NSUUID *_identifier;
    long long _type;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long type;

+ (id)_profileWithUUID:(id)a0 type:(long long)a1;
+ (BOOL)isValidProfileType:(long long)a0;
+ (BOOL)isValidSecondaryProfileType:(long long)a0;
+ (id)primaryProfile;

- (id)init;
- (unsigned long long)hash;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
