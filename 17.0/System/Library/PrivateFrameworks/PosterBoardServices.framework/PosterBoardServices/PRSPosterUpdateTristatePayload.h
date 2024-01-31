@class NSNumber;

@interface PRSPosterUpdateTristatePayload : PRSPosterUpdatePayload <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *tristate;

- (id)rawValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
