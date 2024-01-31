@interface CKContextFingerprint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;

+ (id)parse:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;

@end
