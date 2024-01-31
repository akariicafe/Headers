@interface STStatusBarDataWifiEntry : STStatusBarDataNetworkEntry

@property (readonly, nonatomic) long long type;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entryWithType:(long long)a0 status:(long long)a1 lowDataMode:(BOOL)a2 rawValue:(long long)a3 displayValue:(long long)a4 displayRawValue:(BOOL)a5;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
