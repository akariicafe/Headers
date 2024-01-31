@class NSString;

@interface STStatusBarDataBackgroundActivityEntry : STStatusBarDataEntry

@property (readonly, copy, nonatomic) NSString *backgroundActivityIdentifier;
@property (readonly, nonatomic) double displayStartDate;
@property (readonly, copy, nonatomic) NSString *detailString;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entryWithBackgroundActivityIdentifier:(id)a0 displayStartDate:(double)a1 detailString:(id)a2;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_hashBuilder;
- (id)_equalsBuilderWithObject:(id)a0;

@end
