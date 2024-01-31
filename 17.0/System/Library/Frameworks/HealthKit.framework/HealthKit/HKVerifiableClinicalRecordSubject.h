@class NSString, NSDateComponents;

@interface HKVerifiableClinicalRecordSubject : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *fullName;
@property (readonly, copy) NSDateComponents *dateOfBirthComponents;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFullName:(id)a0 dateOfBirthComponents:(id)a1;

@end
