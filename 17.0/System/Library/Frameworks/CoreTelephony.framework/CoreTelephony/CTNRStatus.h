@interface CTNRStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isSASwitchVisible) BOOL saSwitchVisible;
@property (nonatomic, getter=isSASwitchConfigurable) BOOL saSwitchConfigurable;
@property (nonatomic, getter=isSADisabled) BOOL saDisabled;
@property (nonatomic) unsigned long long saDisabledReasonMask;
@property (nonatomic, getter=isNSADisabled) BOOL nsaDisabled;
@property (nonatomic) unsigned long long nsaDisabledReasonMask;

+ (id)default;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSASwitchVisible:(BOOL)a0 saSwitchConfigurable:(BOOL)a1 saDisabledByBaseband:(BOOL)a2 saDisabledReasonMask:(unsigned long long)a3 nsaDisabledByBaseband:(BOOL)a4 nsaDisabledReasonMask:(unsigned long long)a5;

@end
