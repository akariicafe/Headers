@interface MCCSigningAndEncryptionMessagesStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL signMessagesIsEnabled;
@property (nonatomic) BOOL encryptMessagesIsEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
