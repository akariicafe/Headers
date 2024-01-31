@class NSArray;

@interface COMTTimerUpdateInterestAction : COMTAction

@property (readonly, copy, nonatomic) NSArray *targetIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTargetIdentifiers:(id)a0;

@end
