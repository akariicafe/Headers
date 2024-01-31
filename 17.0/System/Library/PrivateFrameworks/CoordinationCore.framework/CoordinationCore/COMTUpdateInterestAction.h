@class NSArray;

@interface COMTUpdateInterestAction : COMTTypedAction

@property (readonly, copy, nonatomic) NSArray *targetIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (id)actionWithTargetType:(id)a0 targetIdentifiers:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTargetType:(id)a0 targetIdentifiers:(id)a1;

@end
