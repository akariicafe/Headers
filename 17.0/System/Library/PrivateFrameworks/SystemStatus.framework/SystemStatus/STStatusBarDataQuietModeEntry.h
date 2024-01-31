@class NSString;

@interface STStatusBarDataQuietModeEntry : STStatusBarDataBoolImageEntry

@property (readonly, copy, nonatomic) NSString *focusName;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entryWithFocusName:(id)a0 imageNamed:(id)a1 boolValue:(BOOL)a2;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
