@class NSString;

@interface STStatusBarDataBatteryEntry : STStatusBarDataEntry

@property (readonly, nonatomic) long long capacity;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL saverModeActive;
@property (readonly, nonatomic) BOOL prominentlyShowsDetailString;
@property (readonly, copy, nonatomic) NSString *detailString;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entryWithCapacity:(long long)a0 state:(long long)a1 saverMode:(BOOL)a2 prominentlyShowsDetailString:(BOOL)a3 detailString:(id)a4;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
