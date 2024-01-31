@interface STStatusBarDataIntegerEntry : STStatusBarDataEntry

@property (readonly, nonatomic) long long rawValue;
@property (readonly, nonatomic) long long displayValue;
@property (readonly, nonatomic) BOOL displayRawValue;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entryWithRawValue:(long long)a0 displayValue:(long long)a1 displayRawValue:(BOOL)a2;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
