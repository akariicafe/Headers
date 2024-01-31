@class MLNumericConstraint, MLParameterKey;

@interface MLParameterDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MLParameterKey *key;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) MLNumericConstraint *numericConstraint;

+ (id)parameterDescriptionForKey:(id)a0 boolParameterSpec:(const void *)a1;
+ (id)parameterDescriptionForKey:(id)a0 defaultValue:(id)a1 numericConstraint:(id)a2;
+ (id)parameterDescriptionForKey:(id)a0 doubleParameterSpec:(const void *)a1;
+ (id)parameterDescriptionForKey:(id)a0 int64ParameterSpec:(const void *)a1;
+ (id)parameterDescriptionForKey:(id)a0 stringParameterSpec:(const void *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
