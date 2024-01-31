@interface HKScoredAssessment : HKSample <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setScore:) long long score;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (id)assessmentWithDate:(id)a0 type:(id)a1 score:(long long)a2 metadata:(id)a3 config:(id /* block */)a4;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
