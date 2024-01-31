@class NSDate;

@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *lastViolationDate;
@property (readonly) NSDate *lastResetDate;
@property (readonly, getter=hasCurrentViolation) BOOL currentViolation;

+ (id)noViolation;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLastViolationDate:(id)a0 lastViolationResetDate:(id)a1;
- (id)initWithLastViolationTimeInterval:(id)a0 lastViolationResetTimeInterval:(id)a1;

@end
