@class NSArray;

@interface COMTTimerReadAction : COMTAction

@property (readonly, copy, nonatomic) NSArray *targetIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTargetIdentifiers:(id)a0;

@end
