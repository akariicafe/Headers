@class NSString;

@interface RBSConditionAttribute : RBSAttribute

@property (readonly, copy, nonatomic) NSString *condition;
@property (readonly, nonatomic) long long value;

+ (id)attributeWithCondition:(id)a0 value:(long long)a1;

- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
