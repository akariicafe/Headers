@class DNDModeAssertion, DNDModeAssertionSource, NSDate, DNDModeAssertionInvalidationDetails;

@interface DNDModeAssertionInvalidation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) DNDModeAssertionSource *source;
@property (readonly, copy, nonatomic) DNDModeAssertionInvalidationDetails *details;
@property (readonly, nonatomic) unsigned long long reasonOverride;
@property (readonly, copy, nonatomic) DNDModeAssertion *assertion;
@property (readonly, copy, nonatomic) NSDate *invalidationDate;
@property (readonly, nonatomic) unsigned long long reason;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssertion:(id)a0 invalidationDate:(id)a1 details:(id)a2 source:(id)a3 reason:(unsigned long long)a4 reasonOverride:(unsigned long long)a5;

@end
