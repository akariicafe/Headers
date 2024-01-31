@class NSString, SGRecordId;

@interface SGReminderMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SGRecordId *recordId;
@property (readonly, nonatomic) NSString *sourceUniqueIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordId:(id)a0 sourceUniqueIdentifier:(id)a1;
- (BOOL)isEqualToReminderMetadata:(id)a0;

@end
