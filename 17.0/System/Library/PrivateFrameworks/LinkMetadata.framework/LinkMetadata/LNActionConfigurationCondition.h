@class NSString, LNValue;

@interface LNActionConfigurationCondition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, nonatomic) long long comparisonOperator;
@property (readonly, nonatomic) LNValue *value;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComparisonOperator:(long long)a0 widgetFamilies:(id)a1;
- (id)initWithComparisonOperator:(long long)a0 widgetFamily:(id)a1;
- (id)initWithParameterIdentifier:(id)a0 comparisonOperator:(long long)a1 value:(id)a2;

@end
