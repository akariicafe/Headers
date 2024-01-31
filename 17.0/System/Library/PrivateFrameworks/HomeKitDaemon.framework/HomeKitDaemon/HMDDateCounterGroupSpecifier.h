@class NSDate;

@interface HMDDateCounterGroupSpecifier : HMDEventCounterGroupNameSpecifier

@property (readonly, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;
+ (id)specifierWithGroupName:(id)a0 date:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupName:(id)a0 date:(id)a1;

@end
