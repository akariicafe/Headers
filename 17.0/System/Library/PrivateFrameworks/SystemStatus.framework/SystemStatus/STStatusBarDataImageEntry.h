@class NSString;

@interface STStatusBarDataImageEntry : STStatusBarDataEntry

@property (readonly, copy, nonatomic) NSString *imageName;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entryWithImageNamed:(id)a0;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
