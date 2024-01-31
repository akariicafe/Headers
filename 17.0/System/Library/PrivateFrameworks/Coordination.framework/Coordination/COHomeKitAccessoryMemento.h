@class NSUUID, NSString;

@interface COHomeKitAccessoryMemento : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *categoryType;
@property (readonly, nonatomic) NSUUID *homeUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *IDSIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHomeKitAccessory:(id)a0;
- (BOOL)isEqualToHomeKitAccessoryMemento:(id)a0;

@end
