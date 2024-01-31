@interface HMTriggerDeleteAfterExecutionPolicy : HMTriggerDeletePolicy

+ (BOOL)supportsSecureCoding;
+ (id)deleteAfterExecutionPolicy;

- (id)init;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPayload:(id)a0 payload:(id)a1;

@end
