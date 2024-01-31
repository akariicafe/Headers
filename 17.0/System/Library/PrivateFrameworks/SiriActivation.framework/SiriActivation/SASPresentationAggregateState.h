@interface SASPresentationAggregateState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL canAcceptNewActivations;
@property (readonly, nonatomic) BOOL didNewActivationAcceptanceChange;
@property (readonly, nonatomic) long long requestState;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCanAcceptNewActivations:(BOOL)a0 didNewActivationAcceptanceChange:(BOOL)a1 requestState:(long long)a2;

@end
