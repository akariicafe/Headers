@class STStatusBarDataBatteryEntry;

@interface STStatusBarDataBluetoothEntry : STStatusBarDataEntry

@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) STStatusBarDataBatteryEntry *batteryEntry;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entryWithState:(long long)a0 batteryEntry:(id)a1;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
