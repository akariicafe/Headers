@interface STStatusBarDataNetworkEntry : STStatusBarDataIntegerEntry

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) BOOL lowDataModeActive;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entryWithStatus:(long long)a0 lowDataMode:(BOOL)a1 rawValue:(long long)a2 displayValue:(long long)a3 displayRawValue:(BOOL)a4;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
