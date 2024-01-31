@class NSArray;

@interface BBActionGroup : BBAction

@property (copy, nonatomic) NSArray *actions;

+ (id)actionGroupWithActions:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
