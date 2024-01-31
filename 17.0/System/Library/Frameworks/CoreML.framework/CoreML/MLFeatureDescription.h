@class NSString, NSDictionary, MLDictionaryConstraint, MLImageConstraint, MLMultiArrayConstraint, MLSequenceConstraint;

@interface MLFeatureDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *valueConstraints;
@property (readonly, nonatomic) MLMultiArrayConstraint *multiArrayConstraintCached;
@property (readonly, nonatomic) MLImageConstraint *imageConstraintCached;
@property (readonly, nonatomic) MLDictionaryConstraint *dictionaryConstraintCached;
@property (readonly, nonatomic) MLSequenceConstraint *sequenceConstraintCached;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;

+ (id)featureDescriptionWithName:(id)a0 type:(long long)a1 optional:(BOOL)a2 constraints:(id)a3;

- (id)debugQuickLookObject;
- (id)multiArrayConstraint;
- (id)imageConstraint;
- (void)encodeWithCoder:(id)a0;
- (id)dictionaryConstraint;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;
- (BOOL)allowsValuesWithDescription:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)sequenceConstraint;
- (id)initWithName:(id)a0 type:(long long)a1 optional:(BOOL)a2 contraints:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAllowedValue:(id)a0;

@end
