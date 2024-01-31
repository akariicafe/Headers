@class NSArray, NSString;

@interface HKStateOfMind : HKSample <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setReflectiveInterval:) long long reflectiveInterval;
@property (nonatomic, setter=_setValence:) double valence;
@property (copy, nonatomic, setter=_setLabels:) NSArray *labels;
@property (copy, nonatomic, setter=_setDomains:) NSArray *domains;
@property (copy, nonatomic, setter=_setContext:) NSString *context;
@property (readonly, nonatomic) long long valenceClassification;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (id)stateOfMindWithDate:(id)a0 reflectiveInterval:(long long)a1 valence:(double)a2 labels:(id)a3 domains:(id)a4 context:(id)a5 metadata:(id)a6;
+ (id)validateValence:(double)a0;

- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasAnyUnknownDomain;
- (BOOL)hasAnyUnknownLabel;

@end
