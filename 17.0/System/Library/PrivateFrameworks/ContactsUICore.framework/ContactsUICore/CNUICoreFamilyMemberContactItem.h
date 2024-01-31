@class NSString, NSData;

@interface CNUICoreFamilyMemberContactItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *formattedName;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) BOOL isUnreachable;
@property (readonly, nonatomic) BOOL isProposed;
@property (readonly, nonatomic) long long contactType;
@property (readonly, nonatomic) long long whitelistStatus;
@property (readonly, nonatomic) BOOL hasBeenPersisted;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContactIdentifier:(id)a0;
- (id)initWithContactIdentifier:(id)a0 formattedName:(id)a1 imageData:(id)a2 isUnreachable:(BOOL)a3 isProposed:(BOOL)a4 contactType:(long long)a5 whitelistStatus:(long long)a6 hasBeenPersisted:(BOOL)a7;

@end
