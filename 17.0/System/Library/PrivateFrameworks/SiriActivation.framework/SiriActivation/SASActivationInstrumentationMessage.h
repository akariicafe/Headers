@class NSUUID, ACTVSchemaACTVClientEvent;

@interface SASActivationInstrumentationMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ACTVSchemaACTVClientEvent *event;
@property (readonly, nonatomic) NSUUID *activationEventIdentifier;
@property (readonly, nonatomic) unsigned long long machAbsoluteTime;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEvent:(id)a0 activationEventIdentifier:(id)a1 machAbsoluteTime:(unsigned long long)a2;

@end
