@class NSString;

@interface STStatusBarDataActivityEntry : STStatusBarDataEntry

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *displayId;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entryWithType:(long long)a0 displayID:(id)a1;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
