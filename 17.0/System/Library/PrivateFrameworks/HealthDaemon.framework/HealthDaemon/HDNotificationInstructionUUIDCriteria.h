@class NSUUID;

@interface HDNotificationInstructionUUIDCriteria : HDNotificationInstructionCriteria

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (BOOL)supportsSecureCoding;

- (id)initWithUUID:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageDictionary:(id)a0;
- (id)messageDictionary;

@end
