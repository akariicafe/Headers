@interface SiriPresentationOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL wakeScreen;
@property (readonly, nonatomic) BOOL hideOtherWindowsDuringAppearance;
@property (readonly, nonatomic) long long rotationStyle;
@property (readonly, nonatomic) long long requestSource;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWakeScreen:(BOOL)a0 hideOtherWindowsDuringAppearance:(BOOL)a1 rotationStyle:(long long)a2 requestSource:(long long)a3;

@end
