@interface HMDTriggerDeleteAfterExecutionPolicy : HMDTriggerDeletePolicy

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applyPolicy:(id)a0;

@end
