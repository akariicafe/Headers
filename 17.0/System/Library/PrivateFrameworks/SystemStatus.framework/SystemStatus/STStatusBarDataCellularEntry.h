@class NSString;

@interface STStatusBarDataCellularEntry : STStatusBarDataNetworkEntry

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSString *crossfadeString;
@property (readonly, copy, nonatomic) NSString *badgeString;
@property (readonly, nonatomic) BOOL wifiCallingEnabled;
@property (readonly, nonatomic) BOOL callForwardingEnabled;
@property (readonly, nonatomic) BOOL showsSOSWhenDisabled;
@property (readonly, nonatomic) BOOL sosAvailable;
@property (readonly, nonatomic) BOOL isBootstrapCellular;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entryWithType:(long long)a0 stringValue:(id)a1 crossfadeStringValue:(id)a2 badgeStringValue:(id)a3 wifiCalling:(BOOL)a4 callForwarding:(BOOL)a5 showsSOSWhenDisabled:(BOOL)a6 sosAvailable:(BOOL)a7 isBootstrapCellular:(BOOL)a8 status:(long long)a9 lowDataMode:(BOOL)a10 rawValue:(long long)a11 displayValue:(long long)a12 displayRawValue:(BOOL)a13;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
