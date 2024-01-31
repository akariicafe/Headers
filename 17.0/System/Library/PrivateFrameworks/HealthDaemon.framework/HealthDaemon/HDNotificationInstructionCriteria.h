@class NSString;

@interface HDNotificationInstructionCriteria : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) NSString *criteriaIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessageDictionary:(id)a0;
- (id)messageDictionary;
- (long long)isValidWithDatabaseTransaction:(id)a0 error:(id *)a1;

@end
