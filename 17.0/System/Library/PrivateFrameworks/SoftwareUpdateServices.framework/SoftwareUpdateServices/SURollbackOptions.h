@interface SURollbackOptions : SUOptionsBase <NSSecureCoding, NSCopying> {
    BOOL _promptForConsent;
    BOOL _promptForPasscode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL cancelActiveUpdate;
@property (nonatomic) BOOL promptForConsent;
@property (nonatomic) BOOL promptForPasscode;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
