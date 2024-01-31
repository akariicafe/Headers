@class NSString;

@interface STStatusBarDataStringEntry : STStatusBarDataEntry

@property (readonly, copy, nonatomic) NSString *stringValue;

+ (BOOL)supportsSecureCoding;
+ (id)entryWithStringValue:(id)a0;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
