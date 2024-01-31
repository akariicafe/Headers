@class NSString, NSUUID;

@interface CTXPCContextInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *labelID;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) long long slotID;

+ (id)contextWithUUID:(id)a0 andAccountID:(id)a1 andSlot:(long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)context;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 andAccountID:(id)a1 andSlot:(long long)a2;

@end
